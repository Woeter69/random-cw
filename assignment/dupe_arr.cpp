#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter the size of array ";
  cin >> n;
  int arr[n];
  cout << "Enter elements one by one ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  /* for (int i = 0; i < n; i++) { */
  /*   cout << arr[i] << " "; */
  /* } */
  int new_arr[n];
  int count = 0;
  bool flag = false;

  for(int i = 0; i < n; i++) {
    
    flag = false;
    for(int j = 0; j < count; j++) {

        if(new_arr[j] == arr[i]) {
          flag = true;
          break;
        }
    }
  

    if(!flag) {
      new_arr[count] = arr[i];
      count++;
    }
  }
  for (int i = 0; i < count; i++) {
    cout << new_arr[i] << " ";
  }
}


