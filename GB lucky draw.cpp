
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int msleep(unsigned long milisec) {   
    struct timespec req={0};   
    time_t sec=(int)(milisec/1000);   
    milisec=milisec-(sec*1000);   
    req.tv_sec=sec;   
    req.tv_nsec=milisec*1000000L;   
    while(nanosleep(&req,&req)==-1)   
        continue;   
    return 1;   
}

int main () {
    
  srand(time(0));
  int a;
  int b;
  int y;
  int y1;
  cout <<endl;
  cout << "enter the start of the range: ";
  cin >> y;
  cout << "enter the end of the range: ";
  cin >> b;
cout << "enter the number of gifts: ";
  cin >> y1;
  cout<<" Processing data ..";
  msleep(500);
  cout<<".";
  msleep(500);
  cout<<".";
  msleep(500);
  cout<<".";
  msleep(500);
  cout<<".";
  msleep(500);
  cout<<".";
  msleep(500);
  cout<<"."<< endl;
  msleep(500);
  
  for (	unsigned long int x = 0; x <= 5000; x++) {
  	
    cout << 878 + (rand() % 254756868687) <<" . " <<  msleep(0); // add time delay here
  }
  	cout <<endl;
   cout << "-----------------------" << endl;
   cout << "Your lucky number is: ";
   
  for (int x = 0; x <= y1 ; x++) { 
  
  	 cout << y + (rand() % (b-y) )  << endl;
  
  }
   
  
  
  string ans;
  cout << "Type close to close the program"<<endl ;
  cin >> ans;
  return 0;

}
