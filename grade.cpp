#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,e;
    cout << "Enter Marks of first subject" << endl;
    cin >> a;
    cout << "Enter Marks of second subject" << endl;
    cin >> b;
    cout << "Enter Marks of third subject" << endl;
    cin >> c;
    cout << "Enter Marks of fourth subject" << endl;
    cin >> d;
    cout << "Enter Marks of fifth subject" << endl;
    cin >> e;
    int total = a+b+c+d+e;
    cout << "Total Marks" << total << endl;
    float percentage = (total/500)*100;
    cout << "Percentage" << percentage << endl;
    }



}
