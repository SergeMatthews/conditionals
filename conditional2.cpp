#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a = 0, b = 0, c = 0;

	cout << "Введите первое число: ";
	cin >> a;
	cout << endl << "Введите второе число: ";
	cin >> b;
	cout << endl << "Введите третье число: ";
	cin >> c;

	cout << endl << endl << "Результат: " << \
		(a > b ? (a > c ? a : c) : (b > c ? b : c)) << ' ' << \
		(a > b ? (a > c ? (b > c ? b : c) : a) : (a > c ? a : (b > c ? c : b))) << ' ' << \
		(a < b ? (a < c ? a : c) : (b < c ? b : c)) << endl;
	
	return 0;
}


