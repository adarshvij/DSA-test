/*a company is given charge to collect the electricity bill from the customers
customer can be of 2 types 
a = domestic
b = commercial
free units for domestic customer=200
and for commercial = 1000
rate per unit for domestic = 8/unit
and for commercial = 15/unit
monthly rent of the meter which is must is 100 for domestic user
and 500 for commercial user
if total bill exceeds 5000 for domestic user then 15% surcharge has to be added to the bill
and for commercial if it exceeds 15000 then 25% surcharge has to be added to the bill*/

#include<iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter the no. of units:"<< endl;
    cin >> units;
    int c;
    cout << "enter type of customer - 1(domestic)or 2(commercial)?  :"<< endl;
    cin >> c;
    int bill = 0;
    if (c == 1) {
        if( units > 200) {
            bill = units*8 +100;
            if (bill > 5000) {
                int surcharge = 0;
                surcharge = (bill - 5000) * .15;
                bill = bill + surcharge;
            }
        }
    }
    else if (c == 2) {
        if (units > 500) {
            bill = units*15+500;
            if (bill > 15000) {
                int surcharge = 0;
                surcharge = (bill - 15000) * .25;
                bill = bill + surcharge;
            }
        }
    }
    cout <<"Your electricity bill is:" << bill;
    return 0;
 }
