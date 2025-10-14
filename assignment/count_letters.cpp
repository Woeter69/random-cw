#include <iostream>

using namespace std;

int main() {
  char str[100];
  cout << "Enter text: ";
  cin >> str;
  cout << "You entered " << str << endl;

  int count[26];

  int i = 0;
  while (i < 26) {
    count[i++] = 0;
  }


  i = 0;
  while (str[i] != '\0') {
    char c = str[i];
    
    if (c >= 'A' && c <= 'Z') {
      c = c +32;
    }
    if (c >= 'a' && c <= 'z') {
      count[c - 'a'] = count[c - 'a'] + 1;
    }
    i++;
  }

  i = 0;
  while (i < 26) {
    if (count[i] > 0) {
      cout << char('a' + i) << ": " << count[i] << endl;
    }
    i++;
  }
}
