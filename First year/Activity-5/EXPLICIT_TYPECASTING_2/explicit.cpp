#include <iostream>
using namespace std;

int main() {

    int int1 = 98;
    int int2 = 75;

    // Common casts used: int -> char and int -> float
    char convertedChar = static_cast<char>(int1);
    float convertedFloat = static_cast<float>(int2);

    cout << "Original int value (for char cast): " << int1 << endl;
    cout << "Converted char value: " << convertedChar << endl;

    cout << "Original int value (for float cast): " << int2 << endl;
    cout << "Converted float value: " << convertedFloat << endl;

    return 0;
}