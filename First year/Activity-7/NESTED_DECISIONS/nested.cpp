#include <iostream>
using namespace std;

int main() {
    int score = 74; // Example score for testing

    // Outer if...else to check if the score is passing or failing
    if (score >= 75) {
        // Inner if...else to check the level of performance within the passing range
        if (score >= 90) {
            cout << "Excellent!" << endl;
        } else {
            cout << "You passed!" << endl;
        }
    } else {
        cout << "Needs improvement." << endl;
    }

    return 0;
}