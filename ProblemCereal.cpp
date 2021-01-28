#include <iostream>
using namespace std;

int main() {
  // conversion factor from ounces to metric units is 1 metric unit to 35273.92 ounces
  double METRIC_TON_IN_OUNCES = 35273.92;
  double packageWeightOunces; // user input
  double packageWeightMT; // MT = metric ton

  cout << "Enter the weight cereal package (ounces): ";
  cin >> packageWeightOunces;

  //converting ounces  of cereal to metric ton
  packageWeightMT = packageWeightOunces / METRIC_TON_IN_OUNCES;
  cout << "Weight of cereal in metric ton: " << packageWeightMT << endl;

  return 0;
}
