#pragma once
#include <iostream>
using namespace std;
class DataTypeSize
{
public:
	static void Run()
	{
		PrintDataTypeSizes();
	}
private:
	static void PrintDataTypeSizes()
	{
		cout << "Size of Integer=4 bytes" << endl;
		cout << "Size of Floating point=4 bytes" << endl;
		cout << "Size of double=8 bytes" << endl;
		cout << "Size of character=1 byte" << endl;
		cout << "Size of Long integer=8 bytes" << endl;
		cout << "Size of Short integer=2 bytes" << endl;
	}
};
