#include <iostream>
#include <string>
using namespace std;

int main() {
    string first = "I";
    string second = "love";
    string third = "programming";

    string sentence = first + " " + second + " ";

    sentence.append(third);

    cout << "Sentence: " << sentence << endl;

    return 0;
}