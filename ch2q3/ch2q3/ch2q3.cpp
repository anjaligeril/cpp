#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const double payIncrease = 7.6;
	double oldAnnualSalary, newAnnualSalary, newMonthlySalary, dueRetroacivePay, monthlyPayIncrease, oldMonthlySalary;
	int months;
	char choice;

	do {
		cout << "Enter the Previous Annual Income\t";
		cin >> oldAnnualSalary;
		cout << "Enter the number of months for retroactive pay \t";
		cin >> months;
		dueRetroacivePay = (oldAnnualSalary*7.6) / 100;
		cout << "Amount of retroactive pay due \t" << dueRetroacivePay << "\n";
		newAnnualSalary = oldAnnualSalary + dueRetroacivePay;
		cout << "The new Annual Salary\t" << newAnnualSalary << "\n";
		monthlyPayIncrease = dueRetroacivePay / months;
		cout << "MonthlypayIncrease\t" << monthlyPayIncrease << "\n";
		oldMonthlySalary = oldAnnualSalary / 12;
		cout << "The old monthly salary\t" << oldMonthlySalary << "\n";
		newMonthlySalary = oldMonthlySalary + monthlyPayIncrease;
		cout << "The new monthly salary\t" << newMonthlySalary << "\n";
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	return 0;
}