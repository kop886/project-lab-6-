﻿#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n;
    double A, B;
    cout << "Введіть число A: ";
    cin >> A;
    cout << "Введіть число B: ";
    cin >> B;
    cout << "Введіть номер дії: ";
    cin >> n;
    switch (n)
    {
    case 1: cout << "Результат додавання" << A + B << endl; break;
    case 2: cout << "Результат віднімання" << A - B << endl; break;
    case 3: cout << "Результат множення" << A * B << endl; break;
    case 4: if (B != 0)cout << "Результат ділення" << A / B << endl; break;
    }
}
