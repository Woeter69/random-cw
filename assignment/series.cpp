#include <iostream>
#include <cmath>
using namespace std;

double fractionSum(int n) {
  double result = 0;
  for (int i = 1; i <= n; i++) {
    result += 1.0 / pow(i,i);
  }
  return result;
}

double factorialSum(int n) {
  double result = 0;
  for (int i = 1; i <= n; i++) {
    factorial = factorial * i
    result += 1.0 / factorial;
  }
  return result;
}



int main() {
  int n;
  cout << "Enter limit: ";
  cin >> n;

  double sumexp = fractionSum(n);
  double sumfact = factorialSum(n);
  cout << "Sum of fractions(exponent): " << sumexp << endl;
  cout << "Sum of fractions(factorial): " << sumfact << endl;

  return 0;
}
