#include <iostream>
using namespace std;

int main() {
    int age = 30; // Example age for testing
    bool hasValidID = true; // Example ID status for testing

    cout << boolalpha;

    // Checks if the customer is 60 or older AND has a valid ID
    if (age >= 60 && hasValidID) {
        cout << "Discount applied." << endl;
    }

    return 0;
}