#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0;i<n;i++) {
        for (int a = 0;a<n-i-1;a++) {
            cout << " ";
        }
        for (int b = 0;b<(2*i)+1;b++) {
            cout << "*";
        }
        for (int c = 0;c<=n-i-1;c++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}