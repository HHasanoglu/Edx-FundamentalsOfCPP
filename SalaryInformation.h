#pragma once
#include<iostream>
using namespace std;

class SalaryInformation
{
public:
	static void Run()
	{
        PrintSalaryInfo();
	}
private:
	static void PrintSalaryInfo()
	{
        cout << "Input the Employee ID:" << endl;
        int ID;
        cin >> ID;

        cout << "Input the working hrs:" << endl;
        int hour;
        cin >> hour;

        cout << "Salary amount/hr:" << endl;
        int amount;
        cin >> amount;

        cout << "Employee ID = " << ID << endl;
        cout << "Salary = " << amount * hour << endl;

	}
};