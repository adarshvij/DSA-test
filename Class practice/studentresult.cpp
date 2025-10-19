/*write a program to print a result of a student based on marks acheived in 3 different subjects out of 100 each.
if marks a less than 40% and then print student is failed
for 40 to 60 print pass
61 to 79% print 1st
79 onwards print merit
the process has to be repeated for 5 students */
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a,x,y,z;
    for(int i=1;i<=5;i++) {
    cout <<"Enter your marks in 3 subjects: " << endl;
    cin >> x >> y >> z;
    a=(x+y+z)*100/300;
    if(a<40) {
        cout << "Result of " << i << ": failed"<<endl;
    }
    else if(a>=40 && a<=60) {
        cout << "Result of " << i << ": Passed"<<endl;
    }
    else if(a>60 && a<80) {
        cout << "Result of " << i << ": 1st Division"<<endl;
    }
    else if(a>80) {
        cout << "Result of " << i << ": Merit"<<endl;
    }
}
    return 0;
}
