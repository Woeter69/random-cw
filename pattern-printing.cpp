#include <iostream>
using namespace std;

int printSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
}

int printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int printEquilateralTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
}

int ReverseTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int printReversePyramid(int n) {
    for (int i = n; i>= 1; i--) {
        for (int j = n; j>i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        } 
    cout << endl;
    }
    return 0;
}

int rightReverseTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j  < n-i; j++) {
            cout << " ";
        }
        for (int k = n; k <= (2*i - 1); k--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;
    cout << "Square pattern:" << endl;
    printSquare(n);
    cout << endl;
    cout << "Triangle pattern:" << endl;
    printTriangle(n);
    cout << endl;
    cout << "Equilateral triangle pattern: " << endl;
    printEquilateralTriangle(n);
    cout << endl;
    cout << "Reserve Pyramid: " << endl;
    printReversePyramid(n);
    cout << endl;
    cout << "Reservse Triangle: " <<endl;
    ReverseTriangle(n);
    cout << endl;
    cout << "Right Reservse Triangle: " <<endl;
    rightReverseTriangle(n);
    return 0;
}


