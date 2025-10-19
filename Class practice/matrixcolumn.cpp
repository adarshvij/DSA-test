#include<iostream>
using namespace std;

int main() {
    int a[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << "input values :"<<endl;
            cin >> a[i][j] ;
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int j=0;j<3;j++) {
        int n=0;
        for(int i=0;i<3;i++) {
            n=n+a[i][j];
        }
        cout << n << " ";
    }
    return 0;
}