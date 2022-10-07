// FundamentalsOfC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "WelcomeMessage.h"
#include "DataTypeSize.h"
#include "LibraryBooks.h"
#include "ADaysSalary.h"
using namespace std;
int main()
{
    /*
    cout << "Hello World \n";
    cout << "My Name is Hamid" << endl;
    cout << "This is a new Line";
    cout << "This is a line with a tab \t";
    cout << "Hi\"\\" << endl;

    // Comment

    int age = 25;
    cout << "I am " << age << " years old";
    cout << " I am Hamid";
    string greeting = "Hello";
    cout << greeting<<endl;


    //cout << "What is your name:"<<endl;
    //string name;
    //cin >> name;
    //cout << "Your name is " << name;

    //string fullName;
    //cout << "Type your full name: ";
    //getline(cin, fullName);
    //cout << "Your name is: " << fullName<<endl;

    cout << sqrt(64)<<endl;
    cout << round(2.6)<<endl;
    cout << log(2)<<endl;

    int time = 20;
    string result = time < 18 ? "Good Day" : "Good Night";
    cout << result<<endl;

    int numbers[5] = { 10,20,30,40,50 };
    int arrayLength = sizeof(numbers) / sizeof(int);
    cout << arrayLength<<endl;


    string food = "Pizza";
    string &meal = food;
    cout << food<<endl;
    cout << meal<<endl;
    meal = "Not pizza";
    cout << meal<<endl;

    string* ptr = &food;
    cout << ptr<<endl;
    cout << *ptr<<endl;
    *ptr = "fish";
    cout << *ptr<<endl;
    cout << food<<endl;
    */

    //std::cout << "Size of Integer=" << sizeof(int) << " bytes" << std::endl;
    //std::cout << "Size of Floating point=" << sizeof(float) << " bytes" << std::endl;
    //std::cout << "Size of double=" << sizeof(double) << " bytes" << std::endl;
    //std::cout << "Size of character=" << sizeof(char) << " bytes" << std::endl;
    //std::cout << "Size of Long integer=" << sizeof(long) << " byte" << std::endl;
    //std::cout << "Size of Short integer=" << sizeof(short) << " bytes" << std::endl;
    //std::cout << "Enter two strings:" << std::endl;
    //string text1;
    //getline(cin, text1);
    //string text2;
    //getline(cin, text2);
    //std::cout << text1 << " book was written by " << text2 << std::endl;


    //char ch = 'A';
    //cout << ch;

    WelcomeMessage::Run();
    DataTypeSize::Run();
    LibraryBooks::Run();
    ADaysSalary::Run();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
