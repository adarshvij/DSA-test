#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Write the numbers:"<<endl;
    cin >> a>> b >> c;
    if(a>b) {
        if(a>c) {
            cout << "Greatest no. is:" << a;
        }
    }
    if(b>c) {
        if(b>a) {
            cout << "Greatest number is:" << b;
        }
    }
    else { cout << "Greatest number is:" << c;}
    return 0;
}