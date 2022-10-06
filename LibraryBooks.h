#pragma once
#include <iostream>
#include <string>
using namespace std;
class LibraryBooks
{
public:
	static void Run()
	{
		PrintDataTypeSizes();
	}
private:
	static void PrintDataTypeSizes()
	{
		cout << "Enter two strings:" << endl;
		string text1;
		getline(cin, text1);
		string text2;
		getline(cin, text2);
		cout << text1 << " book was written by " << text2 << endl;
	}
};

