#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack <int> pt;
pt.push(1);
pt.push(2);

pt.pop();
pt.pop();
cout << "The Top Element is :" << pt.top() << "\n";

}
