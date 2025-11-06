#include <iostream>

using namespace std;

int main() {
  int arr1[50];
  int arr2[50];
  int result[100];

  int n1;
  int n2;
  cout << "Enter length of array 1: ";
  cin >> n1;
  cout << "Enter length of array 2: ";
  cin >> n2;


  cout << "Enter elements are array 1: ";

  for (int i = 0; i < n1; i++) {
    cin >> arr1[i];
  }
  
  cout << "Enter elements of array 2: ";
  for (int i = 0; i < n2; i++) {
    cin >> arr2[i];
  }

  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      result[k] = arr1[i];
      k++;
      i++;
    }
    else {
      result[k] = arr2[j];
      k++;
      j++;
    }
  }
  
  while (i < n1) {
    result[k] = arr1[i];
    i++;
    k++;
  }

  while (j < n2) {
    result[k] = arr2[j];
    k++;
    j++;
  }
  
  int *ptrResult = &result[0];
  for (int x = 0; x < k; x++) {
    cout << *ptrResult << " ";
    ptrResult++;
  }
}
