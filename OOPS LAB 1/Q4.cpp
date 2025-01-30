#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <weight in kilograms>" << endl;
        return 1;
    }
    
    float kg = atof(argv[1]);
    if (kg < 0) {
        cerr << "Invalid input! Weight cannot be negative." << endl;
        return 1;
    }
    
    float pounds = kg * 2.2;
    
    cout << fixed << setprecision(2);
    cout << "Weight in Kilograms: " << kg << " kg" << endl;
    cout << "Equivalent Weight in Pounds: " << pounds << " lbs" << endl;
    
    return 0;
}

