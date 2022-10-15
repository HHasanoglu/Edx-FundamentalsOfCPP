#pragma once
#include <iostream>
using namespace std;
class MultiplyFirstAndLastInteger
{
public:
	static void Run() 
	{
        Multiply();
	}

private:
	static int Multiply() 
	{
        int input = 0;
        std::cin >> input;
        int first = input;
        while (first > 10)
        {
            first /= 10;
        }
        int second = input % 10;
        std::cout << first * second << std::endl;
	}

};

