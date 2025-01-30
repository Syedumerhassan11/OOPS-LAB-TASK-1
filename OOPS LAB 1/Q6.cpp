#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 7) {
        cerr << "Usage: " << argv[0] << " <student name> <five test scores>" << endl;
        return 1;
    }

    stringstream studentName;
    for (int i = 1; i < argc - 5; i++) {
        studentName << argv[i] << (i < argc - 6 ? " " : "");
    }

    double scores[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        scores[i] = atof(argv[argc - 5 + i]);
        sum += scores[i];
    }

    double average = sum / 5.0;

    cout << fixed << setprecision(2);
    cout << "Student name: " << studentName.str() << endl;
    cout << "Test scores: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    cout << "Average test score: " << average << endl;
    
    return 0;
}

