#pragma once
#include<iostream>
using namespace std;
class IncrementCalculation
{

public:
    static void Run()
    {
        Print();
    }

private:
    static void Print()
    {
        cout << "Enter the salary" << endl;
        int salary;
        cin >> salary;
        cout << "Enter the Performance appraisal rating" << endl;
        double appraisal;
        cin >> appraisal;
        double result;        if (salary <= 0 || appraisal < 1 || appraisal>5)
        {
            cout << "Invalid Input" << endl;
        }
        else
        {
            if ((appraisal >= 1) & (appraisal <= 3)) result = 1.1 * salary;
            else if (appraisal >= 3.1 & appraisal <= 4) result = 1.25 * salary;
            else if (appraisal >= 4.1 & appraisal <= 5)result = 1.3 * salary;
            cout << result << endl;
        }
    }

};