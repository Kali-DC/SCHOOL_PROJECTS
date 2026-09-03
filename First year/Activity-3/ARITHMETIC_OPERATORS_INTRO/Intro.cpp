#include <iostream>
using namespace std;
 
int main() {

    int a = 30, b = 20;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;
    int mod = a % b;
    int PEMDAS = (a + b) * 2;
    ++a;
    --b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quot << endl;
    cout << "Modulus: " << mod << endl;
    cout << "Incremented a: " << a << endl;
    cout << "Decremented b: " << b << endl;
    cout << "PEMDAS Result: " << PEMDAS << endl;

    return 0;
}