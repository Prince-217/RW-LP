#include<iostream>

using namespace std;

int main()
{
	int i, size, sum = 0;
	
	cout << "\nEnter The Size of array :- ";
	cin >> size;
	
	int arr[size];
	
	for(i=0 ; i<size ; i++)
	{
		cout << "\na[" << i << "] :- ";
		cin >> arr[i];
	}
	
	cout << "\nOdd and Even numbers :-\n";
	
	for(i=0; i<size ; i++)
	{
		if(arr[i] % 2 != 0)
		{
			cout << "\nODD :-" << arr[i] ;
		}
		else
		{
			cout << "\nEVEN :-" << arr[i] ;
		}
		
		sum += arr[i];
	}
	
	cout << "\n\nPositive and negative numbers :-\n";
	
	for(i=0; i<size ; i++)
	{
		if(arr[i] > 0)
		{
			cout << "\nPOSITIVE :-" << arr[i] ;
		}
		else
		{
			cout << "\nNEGATIVE :-" << arr[i] ;
		}
	}
	
	cout << "\n\nSum of all elements :- " << sum;
	
	return 0;
}