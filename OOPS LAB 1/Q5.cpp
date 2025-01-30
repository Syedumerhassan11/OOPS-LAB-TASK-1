#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 7) {
        cerr << "Usage: " << argv[0] << " <movie name> <adult ticket price> <child ticket price> <adult tickets sold> <child tickets sold> <donation percentage>" << endl;
        return 1;
    }

    stringstream movieName;
    for (int i = 1; i < argc - 5; i++) {
        movieName << argv[i] << (i < argc - 6 ? " " : "");
    }

    double adultTicketPrice = atof(argv[argc - 5]);
    double childTicketPrice = atof(argv[argc - 4]);
    int adultTicketsSold = atoi(argv[argc - 3]);
    int childTicketsSold = atoi(argv[argc - 2]);
    double donationPercentage = atof(argv[argc - 1]);

    double grossAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
    double amountDonated = (donationPercentage / 100) * grossAmount;
    double netSale = grossAmount - amountDonated;

    cout << fixed << setprecision(2);
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << left << setw(40) << "Movie Name:" << movieName.str() << endl;
    cout << left << setw(40) << "Number of Tickets Sold:" << right << setw(10) << adultTicketsSold + childTicketsSold << endl;
    cout << left << setw(40) << "Gross Amount:" << "$ " << right << setw(10) << grossAmount << endl;
    cout << left << setw(40) << "Percentage of Gross Amount Donated:" << right << setw(9) << donationPercentage << "%" << endl;
    cout << left << setw(40) << "Amount Donated:" << "$ " << right << setw(10) << amountDonated << endl;
    cout << left << setw(40) << "Net Sale:" << "$ " << right << setw(10) << netSale << endl;
    
    return 0;
}

