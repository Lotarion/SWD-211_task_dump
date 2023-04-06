// insertion_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int arrlen = 25;
    int arr[arrlen], temp, move;

    for (int i = 0; i < arrlen; i++)
    {
        arr[i] = rand() % 100;
        if (arr[i] < 10) cout << ' ';
        cout << arr[i] << ' ';
    }; cout << endl;

    for (int i = 1; i < arrlen; i++)
    {
        move = i;
        while (move > 0 && arr[move] < arr[move - 1])
        {
            temp = arr[move];
            arr[move] = arr[move - 1];
            arr[move - 1] = temp;
            --move;
        }
    }

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
