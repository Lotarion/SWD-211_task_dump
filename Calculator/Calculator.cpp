// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string exitcheck = "";
    string opcheck = "";

    while (exitcheck != "n")
    {
        int a;
        int b;
        cout << "Enter the input numbers: ";
        cin >> a >> b;
        cout << endl;

        int opcheck;
        cout << "Choose operation (1 for +, 2 for -, 3 for *, 4 for /) ";
        cin >> opcheck;
        cout << endl;

        switch (opcheck)
        {
        case 1:
            cout << "Addition result: " << a + b << endl;
            break;
        case 2:
            cout << "Subtraction result: " << a - b << endl;
            break;
        case 3:
            cout << "Multiplication result: " << a * b << endl;
            break;
        case 4:
            cout << "Division result: " << (float)a / b << endl;
            break;
        default:
            cout << "Error: invalid operation" << endl;
            break;

        }
        cout << "Continue? (y/n) ";
        cin >> exitcheck;
        cout << endl;
    }
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
