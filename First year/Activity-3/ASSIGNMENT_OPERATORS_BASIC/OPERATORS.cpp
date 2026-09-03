#include <iostream>
using namespace std;

int main() {
    double total;

    total = 100;  // starting value
    cout << "Total: " << total << endl;

    total += 50;  // add item
    cout << "After adding item: " << total << endl;

    total -= 20;  // discount
    cout << "After discount: " << total << endl;

    total *= 2;   // buying two of the same cart
    cout << "After multiplying: " << total << endl;

    total /= 2;   // split the total
    cout << "After dividing: " << total << endl;

    return 0;
}