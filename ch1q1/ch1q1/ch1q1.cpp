// Chapter1 question1 
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num1, num2,sum,product;
	cout << "Enter the first number\t";
	cin >> num1;
	cout << "Enter the second number\t";
	cin >> num2;
	sum = num1 + num2;
	product = num1 * num2;
	cout << "The sum is " << sum <<"\n";
	cout << "The product is " << product << "\n";
	return 0;
}


