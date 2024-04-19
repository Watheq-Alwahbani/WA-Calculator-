#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float numone, numtow, res;
	int choice;
	do
	{
		cout << "$$$$     $$$$  $$$$$$$  $$$$     $$$$\n $$$$   $$$$  $$$$ $$$$  $$$$   $$$$\n  $$$$ $$$$  $$$$   $$$$  $$$$ $$$$\n   $$$$$$$  $$$$     $$$$  $$$$$$$\n\n      Watehq Alwahbani Logo \n\n";
		cout << "1. Addition + \n";
		cout << "2. Subtraction - \n";
		cout << "3. Multiplication * \n";
		cout << "4. Division / \n";
		cout << "0. Exit \n\n";
		cout << "Enter Your choice (1-4) :  ";
		cin >> choice;
		if (choice >= 1 && choice <= 4)
		{
			cout << "Enter Your tow Numbers : like (2 2) \n       ";
			cin >> numone >> numtow;
		}
		switch (choice)
		{
		case 1:
			res = numone + numtow;
			cout << "\n Result = " << '(' << res << ')';
			break;
		case 2:
			res = numone - numtow;
			cout << "\n Result = " << '(' << res << ')';
			break;
		case 3:
			res = numone * numtow;
			cout << "\n Result = " << '(' << res << ')';
			break;
		case 4:
			res = numone / numtow;
			cout << "\n Result = " << '(' << res << ')';
			break;
		case 0:
			cout << "\n--------------------------------------\nDo you wont to exit this app.\n";
			char choice;
			{
				cout << "1. YES Y \n";
				cout << "2. NO N \n";
				cout << "Enter Your choice (Y-N) : ";
				cin >> choice;
				if (choice != (char) 'Y' && choice != (char) 'N') {
					cout << "Invalid input.\nPlease enter 'Y' or 'N'.  ";
					cin >> choice;
					break;
				}
				switch (choice)
				{
				case 'Y':
					cout << "\n   Goodbay.   \n\n$$$$     $$$$  $$$$$$$  $$$$     $$$$\n $$$$   $$$$  $$$$ $$$$  $$$$   $$$$\n  $$$$ $$$$  $$$$   $$$$  $$$$ $$$$\n   $$$$$$$  $$$$     $$$$  $$$$$$$\n\n" << endl;
					return 0;
				case 'N':
					cout << "\n\n        ;) Think You.   \n\n$$$$     $$$$  $$$$$$$  $$$$     $$$$\n $$$$   $$$$  $$$$ $$$$  $$$$   $$$$\n  $$$$ $$$$  $$$$   $$$$  $$$$ $$$$\n   $$$$$$$  $$$$     $$$$  $$$$$$$\n\n";
					break;
				}
				while (choice != (char) 'Y' && choice != (char) 'N');
				if (choice == (char) 'Y') {
					cout << "    You chose to exit." << endl;

				}
				else {
					cout << "       You chose to continue.";

				}

			}
		}
		cout << "\n--------------------------------------\n";
	} while (choice !=
	5 && choice !=9);
	cout << "Wrong choice.\n";
	return 0;
}
