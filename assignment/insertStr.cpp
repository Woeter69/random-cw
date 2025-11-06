#include <iostream>

using namespace std;

int main() {
  char str[100];
  char toInsert[100];
  char result[100];

  int pos;

  cout << "Enter the original text: ";
  cin >> str;     // reads until space

  cout << "Enter the text to insert: ";
  cin >> toInsert; // also no spaces allowed

  cout << "Enter position: ";
  cin >> pos;
  
  int lenStr = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    lenStr++;
  }

  int lenInsert = 0;
  for (int i = 0; toInsert[i] != '\0'; i++, lenInsert++);

  if (pos < 0 || pos > lenStr) {
    cout << "Invalid Position\n";
    return -1;
  }

  int i = 0;

  for (int j = 0; j < pos; j++) {
    result[i] = str[j];
    i++;
  }

  for (int j = 0; j < lenInsert; j++) {
    result[i] = toInsert[j];
    i++;
  }

  for (int j = pos; j < lenStr; j++) {
    result[i] = str[j];
    i++;
  }

  result[i] = '\0';

  cout << "New String: " << result;

  return 0;
}


