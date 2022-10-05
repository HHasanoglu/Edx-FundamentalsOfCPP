#pragma once
#include <iostream>
using namespace std;
class WelcomeMessage
{
public:
	static void Run()
	{
		Welcome();
	}
private:
	static void Welcome()
	{
		cout << "Welcome to our World Happy and safe journey" << endl;
	}
};

