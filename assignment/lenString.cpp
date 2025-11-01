#include <iostream>

using namespace std;

int lenString(char *str) {
  int count = 0;
  for (int i = 0; *str != '\0'; i++) {
    count++;
    str++;
  }
  return count;
}

int main() {
  char str [100];

  cout << "Enter text: ";
  cin >> str;

  cout << lenString(&str[0]);
}
