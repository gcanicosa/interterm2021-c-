#include <iostream>
using namespace std;

int main() {
  double hoursWorkedWeekly; // user input
  double grossPay;
  double overtimePay = 0.0;
  double regularPay;
  double socialSecurityTax; //taken from gross pay
  double federalIncomeTax; //taken from gross pay
  double stateIncomeTax; //taken from gross pay
  double netTakeHomePay; // for the week
  const int RATE_OF_PAY = 16; //standard hourly pay
  const int HEALTH_INSURANCE = 10;


  cout << "How many hours do you work per week? ";
  cin >> hoursWorkedWeekly;

  if (hoursWorkedWeekly <= 40){ //worked within regular hours
    grossPay = RATE_OF_PAY * hoursWorkedWeekly;
  }
  else { //employee worked overtime
    regularPay = RATE_OF_PAY * 40; // * 40 hrs
    overtimePay = (hoursWorkedWeekly - 40) * RATE_OF_PAY * 1.5; //overtime hours * rate of pay * overtime
    grossPay = regularPay + overtimePay;
  }

  socialSecurityTax = grossPay * 0.06; // 6% of gross pay
  federalIncomeTax = grossPay * 0.14; // 14%
  stateIncomeTax = grossPay * 0.05; // 5%

  netTakeHomePay = grossPay - socialSecurityTax - federalIncomeTax
                - stateIncomeTax - HEALTH_INSURANCE;

  cout << "Gross pay: $" << grossPay << endl;
  cout << "Social Security tax: $" << socialSecurityTax << endl;
  cout << "Federal income tax: $" << federalIncomeTax << endl;
  cout << "State income tax: $" << stateIncomeTax << endl;
  cout << "Medical insurance: $" << HEALTH_INSURANCE << endl;
  cout << "Overtime pay: $" << overtimePay << endl;
  cout << "Net take-home pay for the week: $" << netTakeHomePay << endl;

}
