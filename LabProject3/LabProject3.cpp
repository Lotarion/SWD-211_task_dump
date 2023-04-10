// LabProject3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

int safecin(string customcout = "Input an integer")
{
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

int main()
{
    const int arrlen = 25;
    int arr[arrlen], temp, move;
    int sw = 1;
    bool check;

    while (true)
    {
        srand(time(0));

        sw = safecin(string("Pick the sorting method:\n1: Shell sort\n2: Shell sort (reverse)\n0: Exit\n"));
        while (sw > 2 || sw < 0) {
            sw = safecin(string("Invalid sorting method number. Pick the sorting method:\n1: Shell sort\n2: Shell sort (reverse)\n0: Exit\n"));
        }
        if (sw == 0) {
            break;
        }

        for (int i = 0; i < arrlen; i++)
        {
            arr[i] = rand() % 100;
            if (arr[i] < 10) cout << ' ';
            cout << arr[i] << ' ';
        }; cout << endl;

        for (int gap = arrlen / 2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < arrlen; i++)
            {
                move = i;
                if (sw == 2) { // ugly as all hell, but works as intended
                    check = arr[move] > arr[move - gap];
                }
                else
                {
                    check = arr[move] < arr[move - gap];
                }
                while (move > gap - 1 && check)
                {
                    temp = arr[move];
                    arr[move] = arr[move - gap];
                    arr[move - gap] = temp;
                    move -= gap;
                    if (sw == 2) {
                        check = arr[move] > arr[move - gap];
                    }
                    else
                    {
                        check = arr[move] < arr[move - gap];
                    }
                }
            }
        }

        for (int i = 0; i < arrlen; i++)
        {
            if (arr[i] < 10) cout << ' ';
            cout << arr[i] << ' ';
        }
        cout << "\n\n Press any key to continue...";
        _getch();
        system("cls");
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
