#pragma once
#include<iostream>
using namespace std;

class DisplayCharacters
{

public:
    static void Run()
    {
        Print();
    }

private:
    static void Print()
    {
        cout << "Enter the digits:" << endl;
        int num1, num2, num3, num4;
        cin >> num1 >> num2 >> num3 >> num4;
        int number[4] = { num1,num2,num3,num4 };
        for (int i = 0;i < sizeof(number);i++) {
            char casted = (char)number[i];
            if ((number[i] >= 65 && number[i] <= 90) || (number[i] >= 97 && number[i] <= 122)) cout << number[i] << "-" << casted << endl;
        }
    }
};