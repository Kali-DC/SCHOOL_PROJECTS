#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "Instrument";
    string copy = original;

    copy+= " (edited)";

    cout << "Original: " << original << endl;
    cout << "Edited Copy: " << copy << endl;

    // The original was not affected because copy is a separate string with its own data.

    return 0;
}