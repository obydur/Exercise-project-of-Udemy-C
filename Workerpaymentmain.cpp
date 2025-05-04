//Worker Payment project Accounting to Walter-Fach-Kraft Industrie GmbH, Markt 5 09111 Chemnitz

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello welcome to our worker payment system" << endl;
    cout << "\nHow many Hours do you work in this month ?: ";
    
    int number_of_hours{0};
    cin >> number_of_hours;
    
    const double price_per_hour {19.50};
    const double income_tax {0.06};
    const int estimate_pay {10};
    
    
    cout <<"\nEstimate of monthly pay slip" << endl;
    cout << "Working hours in this month: " << number_of_hours <<" Hours"<< endl;
    cout << "price per hours: " << price_per_hour << " Euro" << endl;
    cout << "Balance: " << price_per_hour * number_of_hours << " Euro"<< endl;
    cout << "Tax: " << price_per_hour * number_of_hours* 0.06 << " Euro"<< endl;
    cout << "==============================" << endl;
    
   cout << "Total balance: " << (price_per_hour*number_of_hours)-(price_per_hour*number_of_hours*income_tax) << " Euro"<< endl;
   cout << " we can pay to your Bank account within " << estimate_pay << " days (banking hours)" << endl;
    return 0;
    
    }
