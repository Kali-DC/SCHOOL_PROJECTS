#include <iostream>
using namespace std;

int main() {

    int year = 67; // Example year level for testing

    // Switch statement to display the label for the year level
    switch (year) {
        case 1:
            cout << "Year 1: Freshman" << endl;
            break;
        case 2:
            cout << "Year 2: Sophomore" << endl;
            break;
        case 3:
            cout << "Year 3: Junior" << endl;
            break;
        case 4:
            cout << "Year 4: Senior" << endl;
            break;
        default:
            cout << "Invalid year level." << endl;
            break;
    }

    return 0;
}