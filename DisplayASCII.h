#pragma once
#include<iostream>
using namespace std;

class DisplayASCII
{

public:
    static void Run()
    {
        Print();
    }

private:
    static void Print()
    {
        cout << "Enter the letter" << endl;
        char letter;
        cin >> letter;
        int casted = (int)letter;
        bool capitalLetter = (casted >= 65 && casted <= 90);
        bool lowerLetter = (casted >= 65 && casted <= 90);
        if ((casted >= 65 && casted <= 90) or (casted >= 97 && casted <= 122))
        {
            cout << letter << "-" << casted << endl;
        }
        else cout << "Invalid" << endl;
    }
};

