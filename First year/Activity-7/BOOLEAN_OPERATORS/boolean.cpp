#include <iostream>
using namespace std;

int main() {

    int age = 15;
    bool hasGuardian = true;

    cout << boolalpha;

    // Checks if age is 13 or above AND hasGuardian is true
    cout << "age >= 13 && hasGuardian: "
         << (age >= 13 && hasGuardian) << endl;

    // Checks if age is 13 or above OR hasGuardian is true
    cout << "age >= 13 || hasGuardian: "
         << (age >= 13 || hasGuardian) << endl;

    // Displays the reverse of the age check
    cout << "!(age >= 13): "
         << !(age >= 13) << endl;

    return 0;
}