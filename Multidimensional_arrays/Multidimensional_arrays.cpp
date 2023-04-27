#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    const int arrlen = 5;
    srand(time(0));

    int arr1[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            arr1[i][j] = rand() % 10;
            cout << arr1[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    int arr2[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            arr2[i][j] = i * 10 + j;
            if (arr2[i][j] < 10) {
                cout << '0';
            }
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    // todo: find a way for this to not look horrible
    int arr3_1[arrlen][arrlen];
    int arr3_2[arrlen][arrlen];
    int arr3_3[arrlen][arrlen];
    int arr3_4[arrlen][arrlen];
    int arr3_5[arrlen][arrlen];
    int arr3_6[arrlen][arrlen];

    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (i == j) {
                arr3_1[i][j] = 1;
            }
            else
            {
                arr3_1[i][j] = 0;
            }
            cout << arr3_1[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (i + j == 4) {
                arr3_2[i][j] = 1;
            }
            else
            {
                arr3_2[i][j] = 0;
            }
            cout << arr3_2[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (i <= j) {
                arr3_3[i][j] = 1;
            }
            else
            {
                arr3_3[i][j] = 0;
            }
            cout << arr3_3[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (i >= j) {
                arr3_4[i][j] = 1;
            }
            else
            {
                arr3_4[i][j] = 0;
            }
            cout << arr3_4[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (i + j <= 4) {
                arr3_5[i][j] = 1;
            }
            else
            {
                arr3_5[i][j] = 0;
            }
            cout << arr3_5[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";

    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen; j++) {
            if (i + j >= 4) {
                arr3_6[i][j] = 1;
            }
            else
            {
                arr3_6[i][j] = 0;
            }
            cout << arr3_6[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n";
}