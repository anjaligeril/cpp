// chapter1 qusetion 4
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int time, acceleration = 32, distance;
	cout << "Enter the time in seconds \t";
	cin >> time;
	distance = (acceleration*time*time) / 2;
	cout << "The distance of freefall is \t" << distance;
	return 0;
}

