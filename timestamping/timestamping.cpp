// timestamping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <windows.h> // apparently this thing's also needed
#include <synchapi.h>
using namespace std;

int main()
{
	// first, cancelling out the noise, so that the program runs at the start of a second
	int awaitt = time(0);
	while (time(0) == awaitt)
	{
		Sleep(10);
	}
	int a = time(0);
	cout << a << endl;
	Sleep(100);
	int b = time(0);
	cout << b << endl;
	if (a == b) 
	{
		cout << "a and b turned out to be equal even after waiting 100 miliseconds, which means that time(0) returns time in seconds";
	}
	else {
		cout << "a and be turned out to be not equal after waiting just 100 miliseconds, which means that time(0) does return time in miliseconds";
	}
	cout << endl;
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
