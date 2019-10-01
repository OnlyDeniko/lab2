#pragma once
#include<istream>
#include<ostream>
using namespace std;
class Matrix {
private:
	int **mem;
	int size;
public:
	Matrix(int _size = 0);
	Matrix(const Matrix & tmp);
	Matrix &operator=(const Matrix &tmp);
	friend istream & operator >> (istream & in, Matrix & tmp) {
		for (int i = 0; i < tmp.size; i++) {
			for (int j = 0; j < tmp.size - i; j++) {
				in >> tmp.mem[i][j];
			}
		}
		return in;
	}
	friend ostream & operator << (ostream & out, const Matrix & tmp) {
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

