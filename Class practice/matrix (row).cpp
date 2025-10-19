/*Recieve inputs for a matrix and print rowwise sum along with matrix*/
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
        cout << a[i][0] +a[i][1]+a[i][2];
        cout << endl;
    }
    return 0;
}