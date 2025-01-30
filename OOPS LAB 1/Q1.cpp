#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

float findSecondHighest(float *arr, int size) {
    float highest = -numeric_limits<float>::infinity();
    float secondHighest = -numeric_limits<float>::infinity();

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > highest) {
            secondHighest = highest;
            highest = *(arr + i);
        } else if (*(arr + i) > secondHighest && *(arr + i) != highest) {
            secondHighest = *(arr + i);
        }
    }

    return secondHighest;
}

int main(int argc, char *argv[]) {
    if (argc != 21) {
        cerr << "Usage: " << argv[0] << " <20 float numbers>" << endl;
        return EXIT_FAILURE;
    }

    float arr[20];
    for (int i = 1; i < argc; i++) {
        arr[i - 1] = atof(argv[i]);
    }

    cout << "The second highest number is: " << findSecondHighest(arr, 20) << endl;
    
    return EXIT_SUCCESS;
}

