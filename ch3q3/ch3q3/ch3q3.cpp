#include "pch.h"
#include <iostream>

using namespace std;

int main()
{


	int year,i,x,j,y,z,w,v,u;
	
	cout << "Enter the year: ";
	cin >> year;
	if (year >= 1000 && year <= 3000) {
		cout << year<<endl;
		if (year >= 1000) {
			x = year / 1000;
			cout << x <<endl;
			for (j = 0; j < x; j++) {
				cout << "M";
			}

			year = year % 1000;
		}
		if (year >= 900) {
			cout << "CM";
			year = year % 900;
		}
		else if (year >= 500) {
			y = year / 500;
			
			for (j = 0; j < y; j++) {
				cout << "D";
			}
			year = year % 500;
		}
		if (year >= 400) {
			cout << "CD";
			year = year % 400;
		}else if (year>=100) {
			z = year / 100;

			for (j = 0; j < z; j++) {
				cout << "C";
			}
			year = year % 100;
		}
		if (year >= 90) {
			cout << "XC";
			year = year % 90;
		}
		else if (year>=50) {
			w = year / 50;
			for (j = 0; j < w; j++) {
				cout << "L";
			}
			year = year % 50;
		}
		if (year >= 40) {
			cout << "XL";
			year = year % 40;
		}
		else if (year >= 10) {
			v = year / 10;
			for (j = 0; j < v; j++) {
				cout << "X";
			}
			year = year % 10;
		}
		if (year >= 9) {
			cout << "IX";
			year = year % 9;
		}else if(year>=5){
			u = year / 5;
			for (j = 0; j < u; j++) {
				cout << "V";
			}
			year = year % 5;
		}
		if (year > 4) {
			cout << "IV";
			year = year % 4;
		}
		else if (year >= 1) {
			
			for (j = 0; j < year; j++) {
				cout << "I";
			}
			
		}
		cout <<endl << year << endl;

	}
	else {
		cout << "enter a valid number between 1000 and 3000";
	}
	return 0;
}