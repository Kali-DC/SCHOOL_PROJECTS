#include <iostream>
using namespace std;

int main() {


    double temperature = 37.0; // Example temperature for testing

    if(temperature > 38.0) {
        // Checks for fever (temperature above 38.0°C)
        cout << "Classification: Fever" << endl;
    } else if(temperature >= 37.0 && temperature <= 38.0) {
        // Checks for normal temperature (between 37.0°C and 38.0°C)
        cout << "Classification: Normal" << endl;
    } else {
        // Checks for low temperature (below 37.0°C)
        cout << "Classification: Low" << endl;
    }

    return 0;
}