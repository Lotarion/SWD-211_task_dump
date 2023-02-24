// LabProject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
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
        cout << str << endl;
    }
    else if (b > a) {
        str.insert(0, 1, a);
        str.append(1, b);
        cout << str << endl;
    }
    else {
        cout << a << " and " << b << " are equal." << endl;
    }
    cout << "Press any key to continue" << endl;
    _getch();
}

void _1b()
{
    cout << "Input char:\n";
    unsigned char a = _getch();

    int b = a;
    cout << "Inputed char's code: " << b;
    cout << "Press any key to continue" << endl;
    _getch();
}

void _1c()
{
    cout << "Input char:\n";
    unsigned char a = _getch();

    unsigned char b = a + 1;
    unsigned char c = a - 1;

    cout << "Previous char: " << c << ", next char: " << b;
    cout << "Press any key to continue" << endl;
    _getch();
}

void _1d() // i utterly hate this one
{
    string uphead;
    uphead.append(1, 218);
    for (int _ = 0; _ < 8; _++)
    {
        uphead.append(5, 196);
        uphead.append(1, 194);
    }
    uphead.insert(uphead.size(), 1, 191);

    cout << uphead << endl;

    for (int i = 0; i < 32; i++)
    {
        string a;
        if (i > 9) {
            a = " ";
        }
        else {
            a = "  ";
        }
        cout << "|" << a << i << " " << unsigned char(i) << "|";

        cout << " " << i + 32 << " " << unsigned char(i + 32) << "|";

        cout << " " << i + 64 << " " << unsigned char(i + 64) << "|";

        string b;
        if (i + 96 < 100) {
            b = " ";
        }
        else {
            b = "";
        }
        cout << b << i + 96 << " " << unsigned char(i + 96) << "|";

        cout << i + 128 << " " << unsigned char(i + 128) << "|";
        cout << i + 160 << " " << unsigned char(i + 160) << "|";
        cout << i + 192 << " " << unsigned char(i + 192) << "|";
        cout << i + 224 << " " << unsigned char(i + 224) << "|\n";
    }

    string downhead;
    downhead.append(1, 192);
    for (int _ = 0; _ < 8; _++)
    {
        downhead.append(5, 196);
        downhead.append(1, 193);
    }
    downhead.insert(downhead.size(), 1, 217);

    cout << downhead << endl;
    cout << "Press any key to continue" << endl;
    _getch();
}

void _1e()
{
    cout << "Input a lowercase latin character:\n";
    unsigned char a = _getch();
    while (a < 97 || a > 122) {
        cout << "Invalid character. Input a lowercase latin character:\n";
        a = _getch();
    }
    a = a - 32;
    cout << "Uppercase char is: " << a << endl;
    cout << "Press any key to continue" << endl;
    _getch();
}

void _1f()
{
    cout << "Press ESC key to continue" << endl;
    char a = _getch();
    while (a != 27) {
        "Invalid key input. Press ESC key to continue";
    }
}

void _2() 
{

    cout << "Press any key to continue" << endl;
    _getch();
}

int main()
{
    cout << "Press Enter to start the task sequence\n";
    unsigned char select = _getch();
    if (select != 'e') {
        _1a();
        _1b();
        _1c();
        _1d();
        _1e();
        _1f();
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
            switch (sel)        //What will happen if you forget to break; in switch cases?
            {                   //1: Nothing
            case 1: {           //2: "break" will appear as console output
                _1a();          //3: You will regret being born
                break;
            }                   //Correct answer is 3: You will regret being born
            case 2: {
                _1b();
                break;
            }
            case 3: {
                _1c();
                break;
            }
            case 4: {
                _1d();
                break;
            }
            case 5: {
                _1e();
                break;
            }
            case 6: {
                _1f();
                break;
            }
            default: {
                cout << "Invalid function number";
                break;
            }
            }
            break;
        }
        case 2: {
            _2();
            break;
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
