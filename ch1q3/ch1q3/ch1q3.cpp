// chapter1 question 3
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int quaters, dimes, nickels, cents;
	cout << "Enter the number of quaters \t";
	cin >> quaters;
	cout << "Enter the number of dimes \t";
	cin >> dimes;
	cout << "Enter the number of nickels \t";
	cin >> nickels;
	quaters = quaters * 25;
	dimes = dimes * 10;
	nickels = nickels * 5;
	cents = quaters + dimes + nickels;
	cout << "The monetary value of coins in \t " << cents;
	return 0;

}

