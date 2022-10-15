#pragma once
#include<iostream>
using namespace std;
class FindSeason
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
        int appraisal;
        cin >> appraisal;
        double result;
        if (salary <= 0 || appraisal < 1 || appraisal>5)
        {
            cout << "Invalid Input" << endl;
        }
        else
        {
            int month;
            cin >> month;
            string season = "Season:";
            if (month > 2 && month <= 5)cout << season << "Spring" << endl;
            else if (month > 5 && month <= 8)cout << season << "Summer" << endl;
            else if (month > 8 && month <= 11)cout << season << "Autumn" << endl;
            else if (month == 1 || month == 2 || month == 12)cout << season << "Winter" << endl;
            else cout << "Invalid month" << endl;
        }
    }

};