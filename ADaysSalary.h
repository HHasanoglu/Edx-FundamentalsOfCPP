#pragma once
#include <iostream>
using namespace std;
class ADaysSalary
{
	public:
		static void Run()
		{
			PrintDaysSalary();
		}

	private:
		static void PrintDaysSalary()
		{
			cout << "Enter annual income(in dollar)=" << endl;
			double income;
			cin >> income;
			cout << "One day salary(in dollar)=" << income / 365 << endl;
		}
};

