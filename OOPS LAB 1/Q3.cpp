#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

float unitcalculator(int N) {
    if (N < 199) {
        return 16.20 * N;
    } else if (N >= 200 && N < 300) {
        return 20.10 * N;
    } else if (N >= 300 && N < 500) {
        return 27.10 * N;
    } else {
        return 35.90 * N;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Incomplete Input!" << endl;
        return 1;
    }
    
    int cusid = atoi(argv[1]);
    float unitsconsumed = atof(argv[argc - 1]);
    
    if (unitsconsumed < 0) {
        cout << "Invalid Input!" << endl;
        return 1;
    }
    
    string cusname = "";
    for (int i = 2; i < argc - 1; i++) {
        cusname += argv[i];
        if (i != argc - 2) {
            cusname += " ";
        }
    }
    
    float AmountCharges = unitcalculator(unitsconsumed);
    float surplus = (AmountCharges > 18000) ? AmountCharges * 0.15 : 0;
    float netamount = surplus + AmountCharges;
    
    cout << "Customer Id is : " << cusid << endl;
    cout << "Customer Name is : " << cusname << endl;
    cout << "Units Consumed are : " << unitsconsumed << endl;
    cout << "Amount Charges is : " << AmountCharges << endl;
    cout << "Surplus is : " << surplus << endl;
    cout << "Net Amount is : " << netamount << endl;
    
    return 0;
}
