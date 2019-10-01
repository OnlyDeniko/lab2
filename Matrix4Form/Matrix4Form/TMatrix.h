#include"TVector.h"

template<class T>
class TMatrix : public TVector<TVector<T> > {
public:
	TMatrix<T>(int _size = 0);
	int get_size() const{
		return this->size;
	}
	TMatrix<T>(const TMatrix<T> & tmp);
	TMatrix<T>(const TVector<TVector<T> > & tmp);
	bool operator==(const TMatrix<T> & tmp) const;
	TMatrix<T> & operator=(const TMatrix<T> & tmp);
	TMatrix<T> operator+(TMatrix<T> & tmp);
	TMatrix<T> operator-(TMatrix<T> & tmp);
	TVector<T> &operator[](int pos);
	TMatrix<T> operator*(const TMatrix<T> & tmp);
	friend std::istream & operator >>(std::istream & in, TMatrix<T> &tmp) {
		int x;
		for (int i = 0; i < tmp.size; i++) {
			for (int j = 0; j < tmp.size; j++) {
				if (j >= tmp[i].get_start()) in >> tmp[i][j];
				else in >> x;
			}
		}
		return in;
	}
	friend std::ostream & operator <<(std::ostream & out, TMatrix<T> & tmp) {
		for (int i = 0; i < tmp.size; i++) {
			for (int j = 0; j < tmp.size; j++) {
				if (j >= tmp[i].get_start()) out << tmp[i][j] << ' ';
				else out << "0 ";
			}
			out << '\n';
		}
		return out;
	}
};

template<class T>
inline TMatrix<T>::TMatrix(int _size) : TVector<TVector<T> >(_size) {
	if (_size < 0) throw - 1;
	for (int i = 0; i < _size; i++) {
		this->mem[i] = TVector<T>(_size - i, i);
	}
}

template<class T>
inline TMatrix<T>::TMatrix(const TMatrix<T>& tmp) : TVector<TVector<T> >(tmp) {}

template<class T>
inline TMatrix<T>::TMatrix(const TVector<TVector<T> >& tmp) : TVector<TVector<T> >(tmp) {}

template<class T>
inline bool TMatrix<T>::operator==(const TMatrix<T>& tmp) const {
	if (this->size != tmp.size) return false;
	for (int i = 0; i < this->size; i++) {
		if (this->mem[i] != tmp.mem[i]) return false;
	}
	return true;
}

template<class T>
inline TMatrix<T>& TMatrix<T>::operator=(const TMatrix<T>& tmp) {
	if (this == &tmp) return *this;
	delete[] this->mem;
	this->size = tmp.size;
	this->start = tmp.start;
	this->mem = new TVector<T>[this->size];
	for (int i = 0; i < this->size; i++) {
		this->mem[i] = tmp.mem[i];
	}
	return *this;
}

template<class T>
inline TMatrix<T> TMatrix<T>::operator+(TMatrix<T>& tmp) {
	if (tmp.size != this->size) throw - 1;
	return TVector<TVector<T> > ::operator+(tmp);
}

template<class T>
inline TMatrix<T> TMatrix<T>::operator-(TMatrix<T>& tmp) {
	if (tmp.size != this->size) throw - 1;
	return TVector<TVector<T> > ::operator-(tmp);
}

template<class T>
inline TVector<T>& TMatrix<T>::operator[](int pos) {
	if (pos < 0 || pos >= this->size) throw - 1;
	return this->mem[pos];
}

template<class T>
inline TMatrix<T> TMatrix<T>::operator*(const TMatrix<T>& tmp) {
	TMatrix<T> res(this->size);
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			if (j >= tmp.mem[i].get_start()) {
				for (int k = 0; k < this->size; k++) {
					if (k >= tmp.mem[i].get_start() && k <= j) {
						res[i][j] += this->mem[i][k] * tmp.mem[k][j];
					}
				}
			}
		}
	}
	return res;
}
