#include<iostream>
using namespace std;

// Program to print the table of input No.
int main()
{
	int value = 0; 

	cout << "Enter the number ";
	cin >> value;

	for (int i = 1; i <= 10; i++)
	{
		cout << endl << value << " * " << i << " = " << value * i;
	}

	return 0;
}