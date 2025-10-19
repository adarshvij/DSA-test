/*write a program to print a fibonacci series upto n numbers*/
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<< "Enter first 2 numbers of fibonacci series:" << endl;
    cin >> a>>b;
    cout << a << " " << b;
    for(int i=0;i<10;i++) {
        c = a+b;
        cout <<" " << c << " ";
        a=b;
        b=c;
    }
    return 0;
}