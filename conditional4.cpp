#include <iostream>
#include <string>
using namespace std;

string number_to_text(int number);

int main()
{
    setlocale(LC_ALL, "RU");

    int a = 0, b = 0;
    string message_request = "Введите целое число: ";

    cout << message_request;
    cin >> a;
    cout << endl << message_request;
    cin >> b;
    cout << endl;

    if ((a >= 100 || a <= -100) || ((b >= 100 || b <= -100)))
        cout << "Ошибка! Одно из чисел вне диапазона!";
    else if (a > b)
        cout << number_to_text(a) << " больше чем " << number_to_text(b);
    else if (a < b)
        cout << number_to_text(a) << " меньше чем " << number_to_text(b);
    else
        cout << number_to_text(a) << " равно " << number_to_text(b);
    cout << endl;

    return 0;
}

string number_to_text(int number)
{
    string temp_decims = "", theSign = "", space = " ";
    if (number < 0) {
        theSign = "минус ";
        number = -number;
    }
    if (number < 100) {
        switch (number) {
            case 0: return "ноль";
            break;
            case 10: return (theSign + "десять");
            break;          
            case 11: return (theSign + "одиннадцать");
            break;          
            case 12: return (theSign + "двенадцать");
            break;          
            case 13: return (theSign + "тринадцать");
            break;         
            case 14: return (theSign + "четырнадцать");
            break;          
            case 15: return (theSign + "пятнадцать");
            break;           
            case 16: return (theSign + "шестнадцать");
            break;          
            case 17: return (theSign + "семнадцать");
            break;          
            case 18: return (theSign + "восемнадцать");
            break;         
            case 19: return (theSign + "девятнадцать");
            break;
        }
        switch (number / 10) {
            case 0: space = "";
            break;
            case 2: temp_decims = "двадцать";
            break;
            case 3: temp_decims = "тридцать";
            break;
            case 4: temp_decims = "сорок";
            break;
            case 5: temp_decims = "пятдесят";
            break;
            case 6: temp_decims = "шестдесят";
            break;
            case 7: temp_decims = "семьдесят";
            break;
            case 8: temp_decims = "восемьдесят";
            break;
            case 9: temp_decims = "девяносто";
            break;
        }
        switch (number % 10) {
            case 0: return (theSign + temp_decims + space);
            break;                                
            case 1: return (theSign + temp_decims + space + "один");
            break;                              
            case 2: return (theSign + temp_decims + space + "два");
            break;                                
            case 3: return (theSign + temp_decims + space + "три");
            break;                               
            case 4: return (theSign + temp_decims + space + "четыре");
            break;                               
            case 5: return (theSign + temp_decims + space + "пять");
            break;                               
            case 6: return (theSign + temp_decims + space + "шесть");
            break;                             
            case 7: return (theSign + temp_decims + space + "семь");
            break;                               
            case 8: return (theSign + temp_decims + space + "восемь");
            break;                            
            case 9: return (theSign + temp_decims + space + "девять");
            break;
        }
    }  
}