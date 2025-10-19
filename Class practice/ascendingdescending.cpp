/*Recieve 2 numbers from the user representing range.
Print all the numbers within the range in ascending order as well as descending order*/
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(a>b) {
        cout << "Numbers in ascending order are";
          for(int i=b;i<=a;i++) {
        cout  << i << " "; 
    }
    cout << endl << "Numbers in descending order are :" << endl;
    for(int i=a;i>=b;i--) {
        cout << i << " ";
    }
    }
    else {
        cout << "Numbers in ascending order are:";
    for(int i=a;i<=b;i++) {
        cout << i << " "; 
    }
    cout << endl << "Numbers in Descending order are:";
    for(int i=b;i>=a;i--) {
        cout << i << " ";
    }
}
return 0;
}