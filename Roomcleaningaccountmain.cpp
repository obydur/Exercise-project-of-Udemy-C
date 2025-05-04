//Room cleaning project Accounting to Walter-Fach-Kraft Industrie GmbH, Markt 5 09111 Chemnitz
/* write a room cleaining project 
 Factory Name/ Walter-Fach-Kraft Industrie GmbH
 Charges 40 Euro per room
sales tax rate is 6%
Estimates are valid for 30 days
output
 * Estimate of carpet service
 * Number of rooms 2
 * price per rooms 14.50
 * Cost 
 * Tax 0.06 Euro
 * The estimate is valid for 30 days
............ */


#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello welcome to Walter-Fach-Kraft Industrie GmbH, Markt 5 09111 Chemnitz" << endl;
    cout << "\nHow many rooms would you like cleaned?: ";
    
    int number_of_rooms{0};
    cin >> number_of_rooms;
    
   const double price_per_room {40};
   const double sales_tax {0.06};
   const int estimate_expiry {30};
    
    cout <<"\nEstimate of carpet service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "price per rooms: " << price_per_room << " Euro" << endl;
    cout << "Cost: " << price_per_room * number_of_rooms << " Euro"<< endl;
    cout << "Tax: " << price_per_room * number_of_rooms* 0.06 << " Euro"<< endl;
    cout << "==============================" << endl;
    
   cout << "Total estimate: " << (price_per_room*number_of_rooms)+(price_per_room*number_of_rooms*sales_tax) << " Euro"<< endl;
   cout << "The estimate is valid for " << estimate_expiry << " days" << endl;
    return 0;
    
    }
