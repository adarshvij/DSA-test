/*Write a program to store a range of tables into a 2d array and display it accordingly*/
// You are using GCC
#include<iostream>
using namespace std;

int main() {
    int m,n,r;
    cout << "Enter 2 numbers: " ;
    cin >> m >> n ;
    r=n-m+1;
    int a[r][10];
    for(int i=0;i<r;i++) {
        for(int j=0;j<10;j++) {
            a[i][j]=(m+i)*(j+1);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
