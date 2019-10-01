#include<iostream>
#include"TMatrix.h"
#include"TVector.h"
using namespace std;

int main() {
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "Введите размер векторов: ";
	cin >> n;
	TVector<int> a(n), b(n), c;
	cin >> a >> b;
	cout << "Вектора " << (a == b ? "" : "не ") << "равны\n";
	cout << "Введите число для вычитания из векторов: ";
	int k;
	cin >> k;
	a = a - k;
	b = b - k;
	cout << "A: " << a << '\n' << "B: " << b << '\n';
	cout << "Введите число для сложения из векторов: ";
	cin >> k;
	a = a + k;
	b = b + k;
	cout << "A: " << a << '\n' << "B: " << b << '\n';
	cout << "Введите число для умножения векторов на число: ";
	cin >> k;
	a = a * k;
	b = b * k;
	cout << "A: " << a << '\n' << "B: " << b << '\n';
	c = a + b;
	cout << "Сумма векторов: " << c << '\n';
	c = a - b;
	cout << "A - B: " << c << '\n';
	cout << "Введите размер матриц: ";
	cin >> n;
	TMatrix<int> aa(n), bb(n), cc;
	cin >> aa >> bb;
	cc = aa + bb;
	cout << "A + B:\n";
	cout << cc << '\n';
	cc = aa - bb;
	cout << "A - B:\n";
	cout << cc << '\n';
	cc = aa * bb;
	cout << "A * B:\n";
	cout << cc << '\n';
	return 0;
}