#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
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

int main(){
int C;
while(C < 1000000){
	string Q ;
	string A ;
    char s[1000000] ;
    cout << "Please do not use Special characters."<<endl;
    cout <<endl;
    cout << "Like:   '?'  '<'  '>'  '{'  '}'   ']'   '['   '('   ')'  "<<endl;
    cout <<endl;
	getline(cin ,Q );
	 
	
	ifstream outClientFile;
	outClientFile.open(( "c:/A Data/" + Q +".txt").c_str());
	
		if (!outClientFile)
	{
		cout << "Sorry I have no Idea about it can You help me?" << endl;
			ofstream outClientFile;
			outClientFile.open(("c:/A Data/"+Q +".txt").c_str());
			getline(cin ,A );
			outClientFile << A;
	}
	else{
		 srand(time(0));
		 
		cout << "Just a second..";
				msleep(100);
 				cout<<".";
  				msleep(100);
	  			cout<<".";
		  		msleep(100);
	 		 	cout<<".";
  				msleep(100);
  				cout<<"."<< endl;
  				msleep(100);
			ifstream outClientFile;
			outClientFile.open(("c:/A Data/" +Q +".txt").c_str());
		
		while(outClientFile.eof()==0)
    {
       		outClientFile >> s;
       			cout << s << " ";
    }
		
		
	
	}
msleep(1000);	
 cout<<flush;
  	system ("CLS");	
 C++;	
}
	
	
	return 0;
}
