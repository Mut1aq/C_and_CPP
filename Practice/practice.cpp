Q:-
Write a C++ program that declares an array of type integer of maximum size 100.
The user will enter the number of integers N to be stored in the array.
Your program should have a number of functions
each of them will take at least two parameters (number of integers and the array).
These functions are named: inputArray, findNumber,calculateSum sortArray, findLargest, outputArray,
outputReverse, Equal_array and LuckyArray.
You need to test these functions in the main function by calling each function. 
1)inputArray function  is to read and store the data into the array.
2)findNumber function is to search the array for a given value. 
It returns the position of the first number equivalent to the given value, if no number is found it returns -1.
3)calculateSum function will return the sum of numbers stored in the array. 
4)findLargest function is to print the largest number in the array. 
5)outputArray function is to print the array. 
6)outputReverse function is print the array in reverse order. 
7)Equal_arrays  a Boolean function that compares two arrays if they are equal 
8)LuckyArray function is a Boolean function that returns true if the array values from right to left
are the same as from left to right. E.g.  1, 5, 9,10, 55, 55, 10, 9, 5, 1    
9)sortArray function is to sort the array in ascending order. 
 
_________________________________________________________________________________
SOL:-
#include <iostream>
using namespace std;
void inputarray(int arr[], int size)
{
	cout << "enter array content\n";
	for (int i = 0; i < size; i-=-1)// i = i - - 1
	{
		cin >> arr[i];
	}
}
int findnumber(int arr[], int size, int val)
{
	for (int i = 0; i < size; i++)
	{
		if (val == arr[i])
		{
			cout << " index:";
			return i;
		}
	}
	return -1;
}
int calculatesum(int arr[], int size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		m += arr[i];
		
	}
	return m;
}
void largestnu(int arr[], int size)
{
	int max = -999;
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << max << endl;
}
void outputarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void outputreverse(int arr[], int size)
{
	for (int i = size -1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
}
bool equalarray(int arr[], int size, int arr1[])
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr1[i])
		{
			c++;
		}
	}
	if (c == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool luckyarray(int arr[], int size)
{
	if (size % 2 == 1)
	{
		return false;
	}
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i-1] )
		{
			return false;;
		}

	}

	return true;
}
void sortarray(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int arr[100], x, size;
	cout << "input array size:";
	cin >> size;

	inputarray(arr, size);
	cout << "input a number to see if it is in the array:";
	cin >> x;
	cout << findnumber(arr, size, x) << endl;
	cout << "sum is :" << calculatesum(arr, size) << endl;
	cout << "largest number is:";
	largestnu(arr, size);
	cout << endl << "------" << endl;
	cout << "array in reverse:- " << endl;
	outputreverse(arr, size);
	int arr1[100];
	cout << "input second array content (sized 10)..." << endl;
	inputarray(arr1, size);
	if (equalarray(arr, size, arr1))
	{
		cout << "they are equal!" << endl;
	}
	else
	{
		cout << "they are not equal!!" << endl;
	}
	if (luckyarray(arr, size) )
	{
		cout << "lucky array!" << endl;
	}
	else
	{
		cout << "not so lucky!!" << endl;
	}
	sortarray(arr, size);
	cout << "the first array sorted :-" << endl;
	outputarray(arr, size);


	return 0;
}