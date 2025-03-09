//A program showing the use of arrays 
/*
AUTHOR : Erick
REG NO : BSE-05-0162/2024
GROUP  : BSE group 3
*/

#include <iostream>
using namespace std;

int main() {
    // 1D Array
    int marks1D[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "1D Array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << marks1D[i] << "\t";
    }
    cout << endl << endl;

    // 2D Array
    int marks2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "2D Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << marks2D[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // 3D Array
    int marks3D[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << "3D Array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << marks3D[i][j][k] << "\t";
            }
            cout << endl; 
        }
        cout << endl; 
    }

    return 0;
}