#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 4, c = 2;

    // Prediction: 10 + 4 * 2 = 18
    cout << "Expression 1: " << a + b * c << endl;

    // Prediction: 10 - 4 / 2 = 8
    cout << "Expression 2: " << a - b / c << endl;

    // Prediction: 10 + 4 * 2 - 1 = 17
    cout << "Expression 3: " << a + b * c - 1 << endl;

    // Parentheses change the order: (10 + 4) * 2 = 28
    cout << "With Parentheses: " << (a + b) * c << endl;

    return 0;
}