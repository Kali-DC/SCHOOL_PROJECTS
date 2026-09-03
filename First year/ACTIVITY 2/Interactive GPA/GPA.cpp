#include <iostream>
using namespace std;

int main()
{
    string Name;
    int age;
    float GPA;
    
    cout << "What is your Name? ";
    getline(cin, Name);

    cout << "Enter your Age and GPA: ";
    cin >> age >> GPA;

    cout << "\nInformation System\n";
    cout << "Name:\t" << Name << endl;
    cout << "Age:\t" << age << endl;
    cout << "GPA:\t" << GPA << endl;

    return 0;
}