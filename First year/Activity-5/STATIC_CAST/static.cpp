#include <iostream>
using namespace std;

int main(){
    double d1 = 10.5;
    int converted = static_cast<int>(d1);
    //the decimal value in d1 was lost since double was converted to an int

    cout << "Original double value: " << d1 << endl;
    cout << "Converted int value: " << converted << endl;

    return 0;
}