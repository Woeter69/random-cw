#include <iostream>

using namespace std;

int main() {
  char str[100];
  
  cout << "Enter text: ";
  cin >> str;

  for(int i = 0; str[i] != '\0'; i++) {
    cout << (void*)&str[i] << endl;
  }
}
