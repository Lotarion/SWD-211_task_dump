// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <array>
using namespace std;

int safecin(string customcout = "Input an integer")
{
    //i will hate regular cin till the end of time (yes i just reused the old safecin)
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
    int arr[arrlen], temp;

    srand(time(0));

    // the great spli- nope, a goddamn input validation
    int sw = safecin(string("Pick the sorting method:\n1: Bubble sort\n2: Selection sort\n3: Selection sort (reverse)\n"));
    while (sw > 3 || sw < 1)
    {
        sw = safecin(string("Invalid sorting method number. Pick the sorting method:\n1: Bubble sort\n2: Selection sort\n3: Selection sort (reverse)\n"));
    }

    // Filling up an array with random numbers from 0 - 99
    for (int i = 0; i < arrlen; i++)
    {
        arr[i] = rand() % 100;
        if (arr[i] < 10) cout << ' ';
        cout << arr[i] << ' ';
    }; cout << endl;

    // now we got to the great split
    switch (sw)
    {
    case 1: {
        int count = 1;
        while (count != 0)
        {
            count = 0;
            for (int i = 0; i < arrlen - 1; i++)
            {
                if (arr[i] > arr[i + 1]) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    ++count;
                }
            }
        }
        break;
    }
    case 2: {
        int maxelemi;
        for (int i = 0; i < arrlen - 1; i++)
        {
            maxelemi = 0;
            for (int j = 1; j < arrlen - i; j++)
            {
                if (arr[j] > arr[maxelemi])
                {
                    maxelemi = j;
                }
            }
            temp = arr[maxelemi];
            arr[maxelemi] = arr[arrlen - 1 - i];
            arr[arrlen - 1 - i] = temp;
        }
        break;
    }
    case 3: {
        int minelemi;
        for (int i = 0; i < arrlen - 1; i++)
        {
            minelemi = i;
            for (int j = i; j < arrlen; j++)
            {
                if (arr[j] < arr[minelemi])
                {
                    minelemi = j;
                }
            }
            temp = arr[minelemi];
            arr[minelemi] = arr[i];
            arr[i] = temp;
        }
        break;
    }
    default:
        break;
    }
    // time to flush it
    for (int i = 0; i < arrlen; i++)
    {
        if (arr[i] < 10) cout << ' ';
        cout << arr[i] << ' ';
    }
    cout << "\n\n";
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
