#include <iostream>
#include <cstdlib>

using namespace std;

float calculateSum(float *arr, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <list of float numbers>" << endl;
        return 0;
    }

    int size = argc - 1;
    float arr[size];
    for (int i = 1; i < argc; i++) {
        arr[i - 1] = atof(argv[i]);
    }

    cout << "The sum of the array elements is: " << calculateSum(arr, size) << endl;
    
    return 0;
}

