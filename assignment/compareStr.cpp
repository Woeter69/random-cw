#include <iostream>

using namespace std;

int main() {
  char a[100];
  char b[100];

  cout << "Enter first text: ";
  cin >> a;

  cout << "Enter second text: ";

  cin >> b;

  int result = 0;

  for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
    if (a[i] != b[i]) {
      result = (a[i] > b[i]) ? 1 : -1;
      break;
    }
  }

 if (result == 0) {
   cout << "Equal";
 }
 else if (result > 0) {
   cout << "a < b";
 }
 else {
   cout << "a > b";
 }

 return 0;

}
