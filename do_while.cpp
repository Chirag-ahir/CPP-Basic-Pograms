#include<iostream>
using namespace std;

// Program to print the table of input No.
int main()
{
	int value = 0; 
	int i = 1;

	cout << "Enter the number ";
	cin >> value;

	//do while loop
	do
	{
	    cout << endl << value << " * " << i << " = " << value * i;
		i++;
	}
     while (i <= 10);

	return 0;
}