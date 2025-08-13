#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char sex = 0;
	string zodiacSign;
	unsigned int age = 0;

	cout << "Введите пол (м/ж): ";
	cin >> sex;
	cout << endl << "Введите знак зодиака: ";
	cin >> zodiacSign;
	cout << endl << "Введите возраст: ";
	cin >> age;

	cout << endl << "Ваше предсказание:" << endl;
	if ((age < 40) && (sex == 'м' || sex == 'М') && \
		((zodiacSign == "рак" || zodiacSign == "скорпион" || zodiacSign == "рыбы") || \
		(zodiacSign == "РАК" || zodiacSign == "СКОРПИОН" || zodiacSign == "РЫБЫ"))) {
		cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
	}
	else if ((age >= 15 && age <= 30) && (sex == 'ж' || sex == 'Ж') && \
		((zodiacSign == "телец" || zodiacSign == "дева" || zodiacSign == "козерог") || \
		(zodiacSign == "ТЕЛЕЦ" || zodiacSign == "ДЕВА" || zodiacSign == "КОЗЕРОГ"))) {
		cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n";
		cout << "Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.";
	}
	else{
		cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << endl;
	}
	cout << endl;

	SetConsoleCP(866);
	SetConsoleOutputCP(866);
	
	return 0;
}


