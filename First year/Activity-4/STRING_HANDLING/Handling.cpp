#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Kaleiyah";

    string course;
    cout << "Enter your course: ";
    cin >> course;

    cin.ignore();

    string hobby;
    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);

    cout << endl;

    cout << "User Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;

    return 0;
}