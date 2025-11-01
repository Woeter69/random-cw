#include <iostream>

using namespace std;

void catString(char a[], char b[]) {
  int i;
  int j;
  for (i=0; a[i] != '\0'; i++);

  for (j=0; b[j] != '\0'; j++) {
    a[i] = b[j];
    i++;
  }
  a[i] = '\0';
}

int main() {
  char a[100];
  char b[100];

  cout << "Enter text: ";
  cin >> a;
  
  cout << "Enter second text: ";
  cin >> b;
  cout << "You entered " << a << " and " << b << endl;
  
  catString(a,b);
  cout << a;
}

