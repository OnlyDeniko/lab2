#include "Matrix.h"

Matrix::Matrix(int _size) {
	size = _size;
	mem = new int*[size];
	for (int i = 0; i < size; i++) {
		mem[i] = new int[size - i];
		for (int j = 0; j < size - i; j++) {
			mem[i][j] = 0;
		}
	}
}

Matrix::Matrix(const Matrix & tmp) {
	size = tmp.size;
	mem = new int*[size];
	for (int i = 0; i < size; i++) {
		mem[i] = new int[size - i];
		for (int j = 0; j < size - i; j++) {
			mem[i][j] = tmp.mem[i][j];
		}
	}
}

Matrix & Matrix::operator=(const Matrix & tmp) {
	if (this == &tmp) return *this;
	if (size != tmp.size) {
		if (size) {
			for (int i = 0; i < size; i++) {
				delete[] mem[i];
			}
			delete[] mem;
		}
		size = tmp.size;
	}
	mem = new int *[size];
	for (int i = 0; i < size; i++) {
		mem[i] = new int[size - i];
		for (int j = 0; j < size - i; j++) {
			mem[i][j] = tmp.mem[i][j];
		}
	}
	return *this;
}

Matrix::~Matrix() {
	for (int i = 0; i < size; i++) {
		delete[] mem[i];
	}
	delete[] mem;
	size = 0;
}


