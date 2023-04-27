#include <iostream>
#include <ctime>
using namespace std;

void fill(int arrr[], int arrlen) {
    for (int i = 0; i < arrlen; i++)
    {
        arrr[i] = rand() % 100;
    }
}

void printarray(int arrr[], int arrlen) {
    for (int i = 0; i < arrlen; i++)
    {
        if (arrr[i] < 10) cout << ' ';
        cout << arrr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int arr1[20], arr2[30], arr3[15];

    fill(arr1, 20);
    fill(arr2, 30);
    fill(arr3, 15);

    printarray(arr1, 20);
    printarray(arr2, 30);
    printarray(arr3, 15);
}

