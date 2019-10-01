#include<ostream>

template<class T>
class TVector {
protected:
	T *mem;
	int size;
	int start;
public:
	TVector<T>(int _size = 0, int _start = 0);
	int get_size() {
		return this->size;
	}
	int get_start() {
		return this->start;
	}
	TVector<T>(const TVector<T> & tmp);
	~TVector<T>();
	T & operator[](int pos);
	bool operator==(const TVector<T> & tmp) const;
	TVector<T> &operator=(const TVector<T> & tmp);
	TVector<T> operator+(const T & k);
	TVector<T> operator-(const T & k);
	TVector<T> operator*(const T & kek);
	TVector<T> operator+(const TVector<T> &tmp);
	TVector<T> operator-(const TVector<T> &tmp);
	T operator*(const TVector<T> & tmp);
	friend std::istream & operator >> (std::istream & in, TVector<T> & tmp) {
		for (int i = 0; i < tmp.size; i++) {
			in >> tmp.mem[i];
		}
		return in;
	}
	friend std::ostream &operator <<(std::ostream & out, const TVector<T> &tmp) {
		for (int i = 0; i < tmp.size; i++) {
			out << tmp.mem[i] << ' ';
		}
		return out;
	}
};

template<class T>
inline TVector<T>::TVector(int _size, int _start) {
	if (_size < 0 || _start < 0) throw - 1;
	this->size = _size;
	this->start = _start;
	this->mem = new T[this->size];
	for (int i = 0; i < this->size; i++) this->mem[i] = 0;
}

template<class T>
inline TVector<T>::TVector(const TVector<T>& tmp) {
	this->size = tmp.size;
	this->start = tmp.start;
	this->mem = new T[this->size];
	for (int i = 0; i < this->size; i++) {
		this->mem[i] = tmp.mem[i];
	}
}

template<class T>
inline TVector<T>::~TVector() {
	delete[] mem;
}



template<class T>
inline bool TVector<T>::operator==(const TVector<T>& tmp) const {
	if (tmp.size != size || start != tmp.start) return false;
	for (int i = 0; i < this->size; i++) {
		if (this->mem[i] != tmp.mem[i]) return false;
	}
	return true;
}

template<class T>
inline TVector<T>& TVector<T>::operator=(const TVector<T>& tmp) {
	if (this == &tmp) return *this;
	if (this->mem != NULL) delete[] mem;
	this->size = tmp.size;
	this->start = tmp.start;
	this->mem = new T[this->size];
	for (int i = 0; i < this->size; i++) {
		this->mem[i] = tmp.mem[i];
	}
	return *this;
}

template<class T>
inline TVector<T> TVector<T>::operator+(const T & k) {
	TVector res(*this);
	for (int i = 0; i < this->size; i++) {
		res.mem[i] += k;
	}
	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator-(const T & k) {
	TVector res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] -= k;
	}
	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator*(const T & kek) {
	TVector res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] = T(kek * mem[i]);
	}
	return res;
}

template<class T>
inline T & TVector<T>::operator[](int pos) {
	//cout << "! " << pos << ' ' << this->start << '\n';
	if (pos < (this->start) || (pos - (this->start)) >= this->size) throw - 1;
	return this->mem[pos - this->start];
	//return this->mem[pos];
}

template<class T>
inline TVector<T> TVector<T>::operator+(const TVector<T>& tmp) {
	if (this->size != tmp.size || this->start != tmp.start) throw - 1;
	TVector res(this->size, this->start);
	for (int i = 0; i < this->size; i++) {
		res.mem[i] = this->mem[i] + tmp.mem[i];
	}
	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator-(const TVector<T>& tmp) {
	if (size != tmp.size || start != tmp.start) throw - 1;
	TVector res(this->size, this->start);
	for (int i = 0; i < size; i++) {
		res.mem[i] = this->mem[i] - tmp.mem[i];
	}
	return res;
}

template<class T>
inline T TVector<T>::operator*(const TVector<T>& tmp) {
	if (size != tmp.size || start != tmp.start) throw - 1;
	T res = 0;
	for (int i = 0; i < tmp.size; i++) {
		res += T(this->mem[i] * tmp.mem[i]);
	}
	return res;
}
