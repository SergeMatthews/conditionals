#include <iostream>
using namespace std;

void func_or(bool a, bool b);
void func_and(bool a, bool b);



int main()
{
	setlocale(LC_ALL, "RU");

	bool a = true, b = false;

	cout << "Оператор: ||" << endl;
	func_or(a, a);
	func_or(a, b);
	func_or(b, a);
	func_or(b, b);

	cout << endl;

	cout << "Оператор: &&" << endl;
	func_and(a, a);
	func_and(a, b);
	func_and(b, a);
	func_and(b, b);
	
	return 0;
}

void func_or(bool a, bool b) {
	cout << boolalpha << a << '\t' << b << '\t' << (a || b) << endl;
}

void func_and(bool a, bool b) {
	cout << boolalpha << a << '\t' << b << '\t' << (a && b) << endl;
}

