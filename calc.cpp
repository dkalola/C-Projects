// number echoer
#include <iostream>
using namespace std;
int main ()
{
int x;
int y;
char choice;
while (choice < 1)
{
cout << "please enter 1: addition" << endl << "please enter 2: subtraction" << endl << "please enter 3:multiply";
cin >> choice;
}
if (choice == 999)
{
cout << "please enter only lease 3 digit number if posible";
cin >> x;
cin >> y;
}
switch (choice == 1){
 cout << x + y ;
  
}
return 0;
}
