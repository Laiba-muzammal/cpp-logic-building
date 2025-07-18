#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[ROWS][COLS];
    
    cout << "Enter elements of the 3x3 matrix:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nOriginal matrix:\n";
    printMatrix(matrix);
    
    int search, replace;
    cout << "\nEnter number to search: ";
    cin >> search;
    cout << "Enter replacement number: ";
    cin >> replace;
    
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] == search) {
                matrix[i][j] = replace;
            }
        }
    }
    
    cout << "\nModified matrix:\n";
    printMatrix(matrix);
    
    return 0;
}
