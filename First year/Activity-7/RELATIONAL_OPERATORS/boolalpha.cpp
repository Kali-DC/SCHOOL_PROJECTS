#include <iostream>
using namespace std;

int main() {

    int score1 = 71;
    int score2 = 90;

    cout << boolalpha;

    // Checks if the scores are equal
    cout << "score1 == score2: " << (score1 == score2) << endl;

    // Checks if the scores are different
    cout << "score1 != score2: " << (score1 != score2) << endl;

    // Checks if score1 is greater than score2
    cout << "score1 > score2: " << (score1 > score2) << endl;

    // Checks if score1 is less than score2
    cout << "score1 < score2: " << (score1 < score2) << endl;

    return 0;
}