// file_management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    fstream file;
    int arrlen = 0;
    int tmp, arr[100];
    srand(time(0));

    /*file.open з файлом в мене не працює (хоча я й створював файл у visual studio), 
    тому протестувати не зміг. Але наче має правильно працювати*/

    file.open("data.txt", ios::in);
    if (!file.is_open()) {
        return 1;
    }

    while (!file.eof())
    {
        arrlen++;
    }

    if (arrlen > 100)
    {
        cout << "Error: amount of data in the file is too big to be processed";
        return 1;
    }

    file.close();
    file.open("data.txt", ios::in);

    for (int i = 0; i < arrlen; i++)
    {
        file >> tmp;
        arr[i] = tmp;
        cout << tmp << ' ';
    } 
    cout << endl;
    
    file.close();
    file.open("data.txt", ios::out);

    for (int i = arrlen; i > 0; i--)
    {
        file << arr[i] << ' ';
    }
    file << rand();
    file.close();
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
