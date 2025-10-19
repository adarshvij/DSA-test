#include<iostream>
using namespace std;

int main() {
    int n,last_digit;
    cin >> n;
    while(n>0) {
        last_digit=n%10;
        n=n/10;
        cout << last_digit << endl;
    }
    return 0;
}