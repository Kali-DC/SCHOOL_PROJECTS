#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Name;
   string Course;
   int Age;
   int Grade;

   cout << "Whats your name?"<<endl;
   getline(cin, Name);


   cout << "Whats your course?"<<endl;
   getline(cin, Course);
   cout << "Whats your age?"<<endl;
   cin>> Age;

   cin.ignore();


   cout << "what is your grade?"<<endl;
   cin>> Grade;

   cout<< "Student Information" << endl;
   cout<< "Student Name:\t" << Name << endl;
   cout<< "Student Course:\t" << Course << endl;
   cout<< "Student Age: \t"<< Age << endl;
    cout<< "Student Grade\t"<< Grade << endl;

    return 0;

}