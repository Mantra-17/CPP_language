

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Loan {
private:
    int loanID;
    string applicantName;
    float loanAmount;
    float interestRate;
    int loanTerm;

public:
    // Default constructor
    Loan() {
        loanID = 0;
        applicantName = "N/A";
        loanAmount = 0.0;
        interestRate = 0.0;
        loanTerm = 0;
    }

    // Parameterized constructor
    Loan(int id, string name, float amount, float rate, int term) {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        interestRate = rate;
        loanTerm = term;
    }

    // Calculate EMI
    float calculateEMI() {
        float P = loanAmount;
        float R = interestRate / (12 * 100); // Monthly interest rate
        int N = loanTerm; // Number of months

        if (R == 0) return P / N;

        float emi = P * R * pow(1 + R, N) / (pow(1 + R, N) - 1);
        return emi;
    }

    // Display loan details
    void displayLoanDetails() {
        cout << "Loan ID: " << loanID << endl;
        cout << "Applicant Name: " << applicantName << endl;
        cout << "Loan Amount: Rs" << loanAmount << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Loan Term: " << loanTerm << " months" << endl;
        cout << "Monthly EMI: Rs" << calculateEMI() << endl;
    }
};

int main() {
    Loan loan1(1001, "Mantra", 500000.0, 8.5, 60);
    Loan loan2(1002, "Khush", 300000.0, 7.0, 36);
    Loan loan3; // Default loan

    cout << "Loan Details:\n\n";
    loan1.displayLoanDetails();
    cout << "\n";
    loan2.displayLoanDetails();
    cout << "\n";
    loan3.displayLoanDetails();

    cout << "Patel Mantra\n24DCS076" << endl;
    return 0;
}
