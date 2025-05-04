#include <iostream>
#include <string>
using namespace std;

int main() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    string name;
    int age {0};
    double hourly_wage= {23.50};
 
    
    cout << "What is your first Name: ";
    cin >> name;
    
    cout << "How old are you: ";
    cin >> age;
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age <<" years old | " << " " << hourly_wage;
    
    return 0;
}