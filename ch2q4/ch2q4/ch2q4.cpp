//Chapter2 Question 4

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	char choice;
	double amountNeeded, interestRate, noOfMonths,faceValue,monthlyPayment,duration;
	do {
		cout << "Enter the amount needed as loan\t";
		cin >> amountNeeded;
		cout << "Enter the Interest Rate \t";
		cin >> interestRate;
		interestRate = interestRate / 100;
		cout << "Enter the duration of the loan in months\t";
		cin >> noOfMonths;
		duration = noOfMonths / 12;
		faceValue = amountNeeded / (1-(interestRate * duration));
		cout << "The face value of loan is \t"<< faceValue << "\n";
		monthlyPayment = faceValue / noOfMonths;
		cout << "Monthly Payment is \t" << monthlyPayment << "\n";
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	return 0;
}