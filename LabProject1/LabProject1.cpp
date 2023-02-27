// LabProject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int safecin(string customcout = "Input an integer")
{
    //this is how much i hate infinite loops (mfs occur when text gets pushed into an integer variable)
    int value;
    int error;
    do
    {
        error = 0;
        cout << customcout;
        cin >> value;
        if (cin.fail())
        {
            cout << "Please enter a valid integer" << endl;
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
    } while (error == 1);
    return value;
}

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
    cout << "Inputed char's code: " << b << endl;
    cout << "Press any key to continue" << endl;
    _getch();
}

void _1c()
{
    cout << "Input char:\n";
    unsigned char a = _getch();

    unsigned char b = a + 1;
    unsigned char c = a - 1;

    cout << "Previous char: " << c << ", next char: " << b << endl;
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
    uphead.insert(uphead.size() - 1, 1, 191);

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
    downhead.insert(downhead.size() - , 1, 217);

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
    string sa;
    string sb;

    cout << "Input string a: ";
    cin >> sa;
    cout << "Input string b: ";
    cin >> sb;

    while (sa.empty() && sb.empty())
    {
        cout << "Any of the strings must contain at least one character. ";
        cout << "Input string a: ";
        cin >> sa;
        cout << "Input string b: ";
        cin >> sb;
    }

    string c = sa + sb;
    cout << "Catted (merged) string: " << c << endl;

    cout << "Press any key to continue" << endl;
    _getch();
    system("cls");

    int a = 0;

    a = safecin("Choose an index within the range of your merged string (0 - " + to_string(c.size() - 1) + string("): "));
    
    while (a >= c.size() || a < 0)
    {
        cout << "Invalid input. ";
        a = safecin("Choose an index within the range of your merged string (0 - " + to_string(c.size() - 1) + string("): "));
    }

    cout << "[" << c[a] << "]" << " Choose the symbol to swap it with: " << endl;
    c[a] = _getch();
    cout << c << endl;

    cout << "Press any key to continue" << endl;
    _getch();
    system("cls");

    // unhinged commentary and texts start here (i gave up on formality)
    int stpoint; 

    cout << "Now, choose a substring to cut out." << endl;
    // any sane person would say that this code is shit, but i am not paid for it so don't care
    stpoint = safecin("For this, first choose a starting point (0 - " + to_string(c.size() - 1) + string("): "));
    while (stpoint >= c.size() || a < 0)
    {
        cout << "Invalid input. ";
        stpoint = safecin("Choose a starting point (0 - " + to_string(c.size() - 1) + string("): "));
    }

    int maxrange = c.size() - stpoint;

    int range = safecin("Now input the size of the substring (1 - " + to_string(maxrange) + string("): "));
    while (range >= maxrange || a <= 0)
    {
        cout << "Invalid input. ";
        range = safecin("Input the size of the substring (1 - " + to_string(maxrange) + string("): "));
    }

    cout << "This is the substring you just mercilessly cut out: " << c.substr(stpoint, range) << endl;

    cout << "Press any key to continue" << endl;
    _getch();
    system("cls");
    
    c.erase(stpoint, range);
    
    cout << "And that's what's left after the slaughter: " << c << endl;

    cout << "Press any key to continue" << endl; // easiest task of my life lmao, onto the next one i go
    _getch();
    system("cls");

    cout << "Okay, now choose the impl- erm, the string to put in place of the one you just cut out: "; // string surgery xD
    cin >> sa; // i am done making new vars

    c.insert(stpoint, sa);

    cout << "There is your cyberstring: " << c << endl;

    cout << "Press any key to continue" << endl;
    _getch();
    system("cls");

    cout << "And now, press the key you want to search for in the string: " << endl; // this step should've been between 2a and ab tbh >.>
    char query = _getch();

    if (c.find(query) == -1)
    {
        cout << "Key [" << query << "] is absent from the cyberstring. Hope it wasn't anything vital"; // i love beating dead horses (for legal reasons: i do not and never did)
    }
    else {
        cout << "[" << query << "] is, in fact, present, the first occurrence at [" << c.find(query) << "]. If you think there are more - go find them yourself, not my problem." << endl;
    }
}

int main()
{
    cout << "Press Enter to start the task sequence\n";
    unsigned char select = _getch();
    if (select != 'e') {
        _1a();
        system("cls");
        _1b();
        system("cls");
        _1c();
        system("cls");
        _1d();
        system("cls");
        _1e();
        system("cls");
        _1f();
        system("cls");
        _2();
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
            cout << endl;
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
