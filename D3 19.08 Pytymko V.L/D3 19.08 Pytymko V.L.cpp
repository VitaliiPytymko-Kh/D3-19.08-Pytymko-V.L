// D3 19.08 Pytymko V.L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Написать функцию, определяющую, является ли счастливым 6-значное число. Функция должна выбрасывать два исключения.
//Первое исключение - если число содержит 5 или менее цифр.
//Второе исключение - если число содержит 7 или более цифр.
//Второе исключение выбросите с использованием класса exception.
//Исключения обрабатываем в main().
//Выполненное ДЗ отправляйте в виде ссылки на github.

#include <iostream>
using namespace std;


bool Func(int num) {
    if (num < 100000) {
        throw " число содержит 5 или менее цифр. ";
    }
    if (num>999999)
    {
        throw exception(" число содержит 7 или более цифр");
    }

    int sum1 = num % 10 + (num / 10) % 10 + (num / 100) % 10;
    int sum2 = (num / 1000) % 10 + (num / 10000) % 10 + (num / 100000) % 10;

    return sum1 == sum2;


}


int main()
{
    setlocale(LC_ALL, "");

    int num;
    std::cout << "Введите 6-значное число: ";
    std::cin >> num;
    
    try {

        if (Func(num)) {
            cout << "Это счастливое число!" <<endl;
        }
        else {
            cout << "Это не счастливое число!" <<endl;
        }
        
    }
    catch (const char* p) {
        cout << p;
    }
    catch (const exception& ex) {

        cout << ex.what();
    }


}

