// ch4q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
double calculateAnnualMortgageCost(double initialLoanBalance) {
	double principal, interest, annualMortgageCost;
	principal = (initialLoanBalance * 3) / 100;
	interest= (initialLoanBalance * 6) / 100;
	annualMortgageCost = principal + interest;
	cout << "annualMortgageCost" << annualMortgageCost<<endl;
	return annualMortgageCost;
}

double calculateTaxSavings(double initialLoanBalance) {
	double taxSavings,interest;
	interest = (initialLoanBalance * 6) / 100;
	taxSavings = (interest * 35) / 100;
	cout << "taxSavings" << taxSavings<<endl;
	return taxSavings;

}
int main()
{
	double annualAfterTaxCost,annualMortgageCost,taxSavings,priceOfHouse,downPayment,initialLoanBalance;
	char choice;
	do {
		cout << "Enter the price of the house\t$";
		cin >> priceOfHouse;
		cout << "Enter the Down payment\t$";
		cin >> downPayment;
		initialLoanBalance = priceOfHouse - downPayment;
	    cout << "initialLoanBalance"<< initialLoanBalance << endl;
		annualMortgageCost=calculateAnnualMortgageCost(initialLoanBalance);
		taxSavings = calculateTaxSavings(initialLoanBalance);
		annualAfterTaxCost = annualMortgageCost - taxSavings;
		cout << "The annual after-tax cost is \t$" << annualAfterTaxCost<<endl;
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}

