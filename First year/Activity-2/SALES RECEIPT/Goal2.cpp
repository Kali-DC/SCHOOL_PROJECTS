#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string item = "Notebook";
    int quantity = 3;
    double price = 49.99;
    double total = quantity * price;

    cout << "========== SALES RECEIPT ==========" << endl;
    cout << "Store: School Supplies Shop" << endl;

    cout << "Thank you for shopping!\n";
    cout << "Please come again!\n";

    // Chaining three or more pieces of data together
    cout << "Item: " << item << "  Quantity: " << quantity << "  Price: $" << price << endl;

    cout << fixed << setprecision(2);

    cout << "\nReceipt Details\n";
    cout << setw(15) << "Item" << setw(10) << "Qty" << setw(12) << "Price" << endl;

    cout << setw(15) << item << setw(10) << quantity << setw(12) << price << endl;

    cout << "\nTotal Amount: $" << total << endl;

    return 0;
}