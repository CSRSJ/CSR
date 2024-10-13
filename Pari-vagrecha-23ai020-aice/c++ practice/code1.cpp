#include <iostream>
using namespace std;

class Calculator {
public:
    void addMatrices(int matrx1[2][2], int matrx2[2][2], int result[2][2]);
    void subtractMatrices(int matrx1[2][2], int matrx2[2][2], int result[2][2]);
};

void Calculator::addMatrices(int matrx1[2][2], int matrx2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrx1[i][j] + matrx2[i][j];
        }
    }
}

void Calculator::subtractMatrices(int matrx1[2][2], int matrx2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrx1[i][j] - matrx2[i][j];
        }
    }
}

int main() {
    const int x = 2, y = 2;
    int mtrx1[x][y], mtrx2[x][y], result[x][y];
    Calculator calc;

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> mtrx1[i][j];
        }
    }

    cout << "First matrix:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << mtrx1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> mtrx2[i][j];
        }
    }

    cout << "Second matrix:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << mtrx2[i][j] << " ";
        }
        cout << endl;
    }

    char operation;
    cout << "Select operation (+ or -): ";
    cin >> operation;

    switch (operation) {
        case '+':
            calc.addMatrices(mtrx1, mtrx2, result);
            cout << "Result of addition:" << endl;
            break;
        case '-':
            calc.subtractMatrices(mtrx1, mtrx2, result);
            cout << "Result of subtraction:" << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1; 
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0; 
}



