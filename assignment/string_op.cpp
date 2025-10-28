#include <iostream>

using namespace std;

int charAddress(&);

int main() {
  char str[100];

  cout << "Enter text: ";
  cin >> str;
  cout << "You entered " << str << endl;
}
