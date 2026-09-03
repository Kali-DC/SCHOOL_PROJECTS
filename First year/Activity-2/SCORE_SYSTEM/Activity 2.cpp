#include <iostream>
using namespace std;
// This program collects and displays a student's grade information.

int main ()
{
    const int MAX_GRADE = 100;

    int grade;
    float GPA;
    char letter_grade;
    bool passed = true;


    cout << "Enter GPA (0.0-4.0): ";
    cin >> GPA;

    cout << "Enter grade: ";
    cin >> grade;

    cin.ignore();

    cout << "Enter letter grade (A-F): ";
    cin >> letter_grade;
    cout << endl;

    cout << "Specific Score System" << endl;
    cout << "GPA:\t" << GPA << endl;
    cout << "Total Grade:\t" << grade << endl;
    cout << "Letter Grade:\t" << letter_grade << endl;
    cout << "Passed:\t" << passed << endl;

    /* This program asks the user what their specific grade is in a subject. After the user inputs their
    information, the program outputs it in a cleaner form by putting it at the end of the questions*/

return 0;
}