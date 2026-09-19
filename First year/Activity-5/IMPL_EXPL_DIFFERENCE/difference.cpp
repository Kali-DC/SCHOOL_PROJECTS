#include <iostream>
using namespace std;

int main() {
    double d1 = 1.43;
    int right = static_cast<int>(d1);

    int i1 = 10;
    double wrong = i1;

    cout <<"Explicit Conversion:\n" << "double -> int: " << d1 << " -> " << right << endl;
    // double to int loses the decimal part.
    // 1.43 becomes 1.
    
    cout <<"Implicit Conversion:\n" << "int -> double: " << i1 << " -> " << wrong << endl;

    return 0;
}