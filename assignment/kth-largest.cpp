#include <iostream>
using namespace std;

int kthLargest(int arr[], int n, int k) {
    int largest = 0;
    int prevLargest;

    for (int i = 0; i < k; i++) {
        prevLargest = largest;
        largest = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] > largest && arr[j] < prevLargest) {
                largest = arr[j];
            }
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int k;
    cout << "Enter Kth term";
    cin >> k;

    int ans = kthLargest(arr, n, k);

    cout << "Kth Lagrest term is " << ans;

    return 0;
}
