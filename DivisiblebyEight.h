#pragma once
#include <iostream>
using namespace std;
class DivisiblebyEight
{
public:
	static void Run() 
	{
        IsDivisibleByEight();

	}
private:
	static void IsDivisibleByEight() 
	{
        string number;
        std::cin >> number;
        int numLength = number.length();
        if (numLength > 2)
        {
            int a = number[numLength - 1] - '0';
            int b = number[numLength - 2] - '0';
            int c = number[numLength - 3] - '0';
            int numberCombined = c * 100 + b * 10 + a;
            std::cout << "Last three digits : " << numberCombined << std::endl;
            if ((int)numberCombined % 8 == 0)std::cout << "Number is divisible by 8" << std::endl;
            else   std::cout << "Number is not divisible by 8" << std::endl;

        }
	}
};

