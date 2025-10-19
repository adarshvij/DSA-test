/*write a program to print table of range according to input provided*/
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout << "enter starting range no. of table" << endl;
    cin >> a;
    cout << "enter the ending range no." << endl;
    cin >> b;
    if (a>b) {
        for(int i=b;i<=a;i++) {
            for(int j=1;j<=10;j++) {
                cout << i*j << " ";
            }
            cout<< endl;
        }
    }
    else {
    for(int i=a;i<=b;i++) {
        for(int j=1;j<=10;j++) {
            cout << i*j <<" ";
        }
        cout << endl;
    }
}
    return 0;
}