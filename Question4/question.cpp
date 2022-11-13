#include <iostream>

using namespace std;

double accountInterest(double, double);

double accountTotal(double, double);

void accountTotal2(double, double);

int main() {
    cout << "Interest calculation program" << endl;
    cout << "Enter starting balance: ";
    double accountBalance;
    cin >> accountBalance;
    cout << "Enter annual interest rate(percent): ";
    double annualInterestRate;
    cin >> annualInterestRate;

    accountTotal2(accountBalance, annualInterestRate);
}

double accountInterest(double accountBalance,
                       double annualInterestRate) {
    const int PERCENT = 100;
    annualInterestRate /= PERCENT;
    double interest = accountBalance * annualInterestRate;
    return interest;
}

double accountTotal(double accountBalance, double annualInterestRate) {
    double total = accountBalance + accountInterest(accountBalance,
                                                    annualInterestRate);
    cout << "Balance after one year = "
         << total << endl;
    return total;
}

void accountTotal2(double accountBalance, double annualInterestRate) {
    double total = accountTotal(accountBalance,annualInterestRate) +
            accountInterest(accountBalance, annualInterestRate);
    cout << "Balance after two years = " << total;
}
