#include<iostream>
using namespace std;

void main()
{
    string exitcheck = "";
    string opcheck = "";

    while (exitcheck != "n")
    {
        cout << "Enter the input numbers: ";
        cin >> a >> b;
        cout << endl;

        cout << "Choose operation (+, -, *, /) ";
        cin >> opcheck;
        cout << endl;

        switch (opcheck)
        {
        case "+":
            cout << "Addition result: " << a + b << endl;
            break;
        case "-":
            cout << "Subtraction result: " << a - b << endl;
            break;
        case "*":
            cout << "Multiplication result: " << a * b << endl;
            break;
        case "/":
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