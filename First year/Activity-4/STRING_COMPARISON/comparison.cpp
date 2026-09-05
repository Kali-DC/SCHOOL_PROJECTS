#include <iostream>
#include <string>
using namespace std;
int main() {

    string word1, word2;
    cout << "Enter the first word: ";
    cin >> word1;

    cout << "Enter the second word: ";
    cin >> word2;

    int result = word1.compare(word2);

    if (word1 == word2) {
        cout << "The words are the same." << endl;
    } else if (result < 0) {
        cout << "The first word comes first alphabetically." << endl;
    } else {
        cout << "The second word comes first alphabetically." << endl;
    }
 
    return 0;
}
