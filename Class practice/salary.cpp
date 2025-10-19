#include<iostream>
using namespace std;

int main(){
    int salary;
    cout << "Enter the basic salary:" << endl;
    cin >> salary;
    double da = 0.70*salary;
    double hra = 0.20*salary;
    double ma = .05*salary;
    double pf = .12*salary; 
    double monthly_salary = salary + da + hra + ma-pf;
    double gross_salary = monthly_salary*12;

    double tax = 0;
    if (gross_salary>300000 && gross_salary<=500000) {
        tax = .10*gross_salary;
    }
    else if (gross_salary>500000 && gross_salary<=1000000) {
        tax = .15*gross_salary;
    }
    else if (gross_salary > 1000000) {
        tax = .30*gross_salary;
    }
    gross_salary -= tax;
    cout << "net salary is :" << gross_salary;
    return 0;
}