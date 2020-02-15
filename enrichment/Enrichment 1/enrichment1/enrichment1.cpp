// enrichment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
	// creating declared interger values
	int sum = 0, //adding all
	num = 1, //finding first number above 1000
	add = 0;// adding previous number
	
	while (num < 1000){
		num += add;//adding number plus previous number
		add = num-add;//set add to previous number
		sum += num; // adding all the numbers to sum
	}

	// return statement
	cout << "The highest number above 1000 in the Fibonacci is: " << num << " \nand the sum of all the numbers before is: " << sum;
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
