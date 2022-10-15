#pragma once
#include<iostream>
using namespace std;
class MovieTicketCalculation
{


public:
	static void Run()
	{
		Print();
	}

private:
	static void Print()
	{
		std::cout << "Enter the number of tickets [a minimum of 5 to a maximum of 40 tickets]:" << std::endl;
		int numberOfTickets{};
		std::cin >> numberOfTickets;

		if (numberOfTickets >= 5 && numberOfTickets <= 40) 
		{
			std::cout << "Do you want refreshments?:" << std::endl;
			char refreshment;
			std::cin >> refreshment;
			std::cout << "Do you have special coupun:" << std::endl;
			char coupun;
			std::cin >> coupun;
			std::cout << "Enter the type of seat [Classical/Premiere]:" << std::endl;
			char typeOfSeat;
			std::cin >> typeOfSeat;
			double price{};
			if (typeOfSeat == 'c' || typeOfSeat == 'p')
			{
				if (typeOfSeat == 'c')price = 75;
				else price = 150;

				double discount = 0;
				if (coupun == 'y')discount += 0.02;

				if (numberOfTickets > 20)
				{
					discount += 0.1;
				}

				double totalCost = numberOfTickets * price * (1 - discount);
				if (refreshment == 'y')totalCost += numberOfTickets * 50;
				std::cout << "Ticket cost:" << totalCost << std::endl;
			}
			else
			{
				cout << "Invalid Input";
			}

		}
		else
		{
			std::cout << "Minimum of 5 and Maximum of 40 Tickets" << std::endl;
		}
	}

};
