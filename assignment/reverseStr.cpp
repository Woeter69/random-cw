#include <iostream>

using namespace std;

int main() {
  char str[100];
  char revStr[100];
  int n = 0;
  cout << "Enter text: ";
  cin >> str;
  
  for (int i = 0; str[i] != '\0'; i++) {
    n++;
  }
  int len = n;
  for (int j = 0; j < len; j++) {
    n--;
    revStr[j] = str[n];
  }

  revStr[len] = '\0';


  cout << revStr;
}
