#include<iostream>
#include"TMatrix.h"
#include"TVector.h"
using namespace std;

int main() {
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "������� ������ ��������: ";
	cin >> n;
	TVector<int> a(n), b(n), c;
	cin >> a >> b;
	cout << "������� " << (a == b ? "" : "�� ") << "�����\n";
	cout << "������� ����� ��� ��������� �� ��������: ";
	int k;
	cin >> k;
	a = a - k;
	b = b - k;
	cout << "A: " << a << '\n' << "B: " << b << '\n';
	cout << "������� ����� ��� �������� �� ��������: ";
	cin >> k;
	a = a + k;
	b = b + k;
	cout << "A: " << a << '\n' << "B: " << b << '\n';
	cout << "������� ����� ��� ��������� �������� �� �����: ";
	cin >> k;
	a = a * k;
	b = b * k;
	cout << "A: " << a << '\n' << "B: " << b << '\n';
	c = a + b;
	cout << "����� ��������: " << c << '\n';
	c = a - b;
	cout << "A - B: " << c << '\n';
	cout << "������� ������ ������: ";
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