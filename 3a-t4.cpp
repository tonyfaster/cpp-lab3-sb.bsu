#include <iostream>
using namespace std;

int main() {
	int k, i = 1, sum_k = 0, number;
	while (true) {
		cout << "Enter the amount of integers to sum = "; cin >> k;
		if (k <= 0) 
		{
		cout << "ERROR, That's not an integer number.\n";
		continue; 
		}
		break;
	}
	do {
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		if (!cin) 
		{ 
		cout << "That's not an integer number, input int number. \n"; cin.clear(); cin.ignore(10000, '\n');
		continue; 
		}
		sum_k += number; i++;
	} 
	while (i <= k);
	cout << " The total sum of " << k << " integers is: " << sum_k;
	return 0;
}
