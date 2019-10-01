#include<istream>
#include<ostream>

class Matrix {
private:
	int **mem;
	int size;
public:
	Matrix(int _size = 0);
	Matrix(const Matrix & tmp);
	Matrix &operator=(const Matrix &tmp);
	friend std::istream & operator >> (std::istream & in, Matrix & tmp) {
		for (int i = 0; i < tmp.size; i++) {
			for (int j = 0; j < tmp.size - i; j++) {
				in >> tmp.mem[i][j];
			}
		}
		return in;
	}
	friend std::ostream & operator << (std::ostream & out, const Matrix & tmp) {
		for (int i = 0; i < tmp.size; i++) {
			for (int j = 0; j < tmp.size; j++) {
				if (j < i) out << "0 ";
				else out << tmp.mem[i][j - i] << ' ';
			}
			out << '\n';
		}
		return out;
	}
	~Matrix();
};

