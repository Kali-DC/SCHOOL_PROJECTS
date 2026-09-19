#include <iostream>
using namespace std;

int main()
{
    int int1 = 10;
    char char1 = 'A';


    //int is narrower, and float is broader
    float f = int1;

    // char is narrower, int is broader
    int int2 = char1;

    cout << "Original int value: " << int1 << endl;
    cout << "Converted float value: " << f << endl;

    cout << "Original char value: " << char1 << endl;
    cout << "Converted int value: " << int2 << endl;

    return 0;
}