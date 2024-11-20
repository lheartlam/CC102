#include <iostream>

using namespace std;

int main()
 {
    string accountType;
    string level;
    double balance;

    cout << "Enter account type (Personal or Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard, Gold, Platinum): ";
    cin >> level;
    cout << "Enter account balance: $";
    cin >> balance;

    double interestRate = 0.0; // Initialize to 0%

    if (accountType == "Personal") {
        if (level == "Standard") {
            interestRate = 0.012;
        } else if (level == "Gold") {
            if (balance >= 1000) {
                interestRate = 0.019;
                if (balance >= 5000) {
                    interestRate = 0.023;
                }
            }
        }
    } else if (accountType == "Business") {
        if (level == "Standard") {
            if (balance >= 1500) {
                interestRate = 0.017;
            }
        } else if (level == "Platinum") {
            if (balance >= 10000) {
                interestRate = 0.025;
            }
        }
    }

    cout << "The interest rate is: " << fixed << setprecision(1) << (interestRate * 100) << "%" << endl;

    return 0;
}    
