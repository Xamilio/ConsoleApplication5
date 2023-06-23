#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Число: ";
    cin >> a;
    int n = 0;
    int c = 0;
    int k = a;

    do
    {
        n++;
        if (k % 10 == 0) 
        {
            c++;    
        }
        k = k / 10;
    } 
    while (k != 0);

    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        sum = i + sum;
    }
    cout << "\nКол-во нулей: " << c;
    cout << "\nКол-во цифр = " << n;
    cout << "\nСумма = " << sum;
    cout << "\nСредние арифметическое = " << (double)sum / a << "\n";

    int l;
    cout << "Введите число: ";
    cin >> l;


    for (int y = 0; y < l; y++)
    {
        for (int x = 0; x < l; x++)
        {
            cout << char ('a' + x);
            cout << l - y << "\t";
        }
        cout << "\n";
    }

    float suma =  0;
    int chel;
    char bl;
    cout << "Сколько человек: ";
    cin >> chel;
    for (int i = 0; i < chel; i++)
    {
        while (true)
        {
            cout << "Кофе - 10грн, Пирог - 20  грн, Булочка - 15грн, Мороженое - 17грн\n";
            cout << "Что-бы выбрать позицию введите номер этой позиции (что-бы закончить заказ напишите n): ";
            cin >> bl;
            if (bl == 'n') break;
            if (bl == '1') suma = suma + 10;
            if (bl == '2') suma = suma + 20;
            if (bl == '3') suma = suma + 15;
            if (bl == '4') suma = suma + 17;
        }
    }
    cout << "Ваш чек = " << suma << "грн\n";

    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            cout << char('a' + x);
            cout << y << "\t";
        }
    }
}