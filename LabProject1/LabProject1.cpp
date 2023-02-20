// LabProject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void _1a()
{
    cout << "Input char a for comparsion:\n";
    unsigned char a = _getch();
    cout << "Input char b for comparsion:\n";
    unsigned char b = _getch();

    string str = " is bigger than ";
    if (a > b)
    {
        str.insert(0, 1, a); // could be done with a single cout but i went with a chaotic neutral approach :)
        str.append(1, b);
        cout << str;
    }
    else if (b > a) {
        str.insert(0, 1, a);
        str.append(1, b);
        cout << str;
    }
    else {
        cout << a << " and " << b << " are equal.";
    }
}

int main()
{
    _1a();
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
