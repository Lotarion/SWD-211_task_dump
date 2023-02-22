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

void _1b()
{
    cout << "Input char:\n";
    unsigned char a = _getch();

    int b = a;
    cout << "Inputed char's code: " << b;
}

void _1c()
{
    cout << "Input char:\n";
    unsigned char a = _getch();

    unsigned char b = a + 1;
    unsigned char c = a - 1;

    cout << "Previous char: " << c << ", next char: " << b;
}

void _1d()
{

}


int main()
{
    cout << "Press Enter to start the task sequence\n";
    unsigned char select = _getch();
    if (select != 'e') {
        _1a();
    }
    else {
        int sel;
        cout << "Entered Debug Mode.\nChoose the function bundle to test:\n1: Symbols Bundle\n2: Strings Bundle\n";
        cin >> sel;
        cout << sel;
        switch (sel)
        {
        case 1: {
            cout << "Symbols Bundle: choose the function to test\n1: 1a (char compasion)\n2: 1b (char code output)\n3: 1c (neighbor chars output)\n4: 1d (entire ASCII table dump)\n5: 1e (char output to uppercase)\n6: 1f ('Press Esc to continue')\n";
            cin >> sel;
            switch (sel)
            {
            case 1: {
                _1a();
            }
            case 2: {
                _1b();
            }
            case 3: {
                _1c();
            }
            case 4: {
                _1d();
            }
            case 5: {
                _1e();
            }
            case 6: {
                _1f();
            }
            default: {
                cout << "Invalid function number";
                break;
            }
            }
        }
        case 2: {
            _2();
        }

        default: {
            cout << "Invalid bundle number";
            break;
        }
            
        }
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
