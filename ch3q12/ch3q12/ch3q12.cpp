// ch3q12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int toothPick = 23,numToothPickHuman,numToothPickComputer;
	char choice;
	do {
		while (toothPick != 0) {
			if (toothPick == 1) {
				toothPick = 0;
				cout << "You Loose The game!!!!\n";
				break;
			}
			cout << "The remaining toothpick is \t" << toothPick << "\n";

			cout << "Enter the number of toothpicks you want to withdraw\t";
			cin >> numToothPickHuman;
			//validation of input
			if ((numToothPickHuman < 1 || numToothPickHuman>3) || numToothPickHuman > toothPick) {
				cout << "You need to enter a valid number of toothpick (1-3)..The game is ended ..\n";
				continue;
			}
			else {
				cout << "The No of toothpicks picked by user \t" << numToothPickHuman << "\n";
				toothPick = toothPick - numToothPickHuman;
				//coumpters turn
				if (toothPick > 4) {
					numToothPickComputer = 4 - numToothPickHuman;
					toothPick = toothPick - numToothPickComputer;
					cout << "The No of toothpicks picked by Computer \t" << numToothPickComputer << "\n";
					continue;
				}
				else if (toothPick >= 2 && toothPick <= 4) {
					numToothPickComputer = toothPick - 1;
					cout << "The No of toothpicks picked by Computer \t" << numToothPickComputer << "\n";
					toothPick = 1;
					continue;
				}
				else {
					cout << "\n The computer Looses the game!!! \n";
					break;
				}
				
			}
		}
		cout << "Do you want to repeat the process if yes enter Y else enter N for no\t";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
