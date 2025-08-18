//#include<iostream>
//using namespace std;
//
//int main() {
//    int time;
//    cout << "Enter the time in 24 hour format: " << endl;
//    cin >> time;
//    
//    if (time < 12 && time >= 0) {
//        cout << "Morning";
//    }
//    else if (time >= 12 && time < 18) {
//        cout << "Afternoon";
//    }
//    else {
//        cout << "Night";
//    }
//    
//    return 0;
//}

#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    if (b==0) {
        cout << "Error: Division by zero" << endl;
    }
    else {
        cout << "The division of the two numbers is: " << a/b << endl;
    }
    return 0;
}