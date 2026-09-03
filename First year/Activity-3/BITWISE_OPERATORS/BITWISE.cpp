#include <iostream>
using namespace std;

int main() {
    unsigned int a = 10, b = 6;

    // Bitwise AND: compares bits and returns 1 if both bits are 1
    cout << "AND (&): " << (a & b) << endl;
    
    // Bitwise OR: returns 1 if at least one bit is 1
    cout << "OR (|): " << (a | b) << endl;

    // Bitwise XOR: returns 1 if the bits are different
    cout << "XOR (^): " << (a ^ b) << endl;

    // Bitwise NOT: flips all bits
    cout << "NOT (~a): " << (~a) << endl;

    // Left Shift: shifts bits to the left by 1 position
    cout << "Left Shift (a << 1): " << (a << 1) << endl;

    // Right Shift: shifts bits to the right by 1 position
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;

    return 0;
}