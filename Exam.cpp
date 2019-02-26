#include <iostream>
using namespace std;
 
int main()
{
    double mar[100]; // mar[] = array marks
    int N_O_G, i, x, z; // N_O_G = Number Of Grades 
    int A = 0,B = 0,C = 0,D = 0,E = 0; // Grades
    double mean = 0;
    int total = 0;	
    int max = 0 ;
    int min = 0;
    double S_O_G = 0; // Sum Of Grades
    
 
 int marks = 0;
   
    for(i = 0;marks != -888 ; i++)
    {
    
    	cout<<"Enter The Mark "<<i+1<<" :";
        cin>>mar[i];
        marks = mar[i];
        N_O_G++;
    }
 
    for(i = 0; i < N_O_G; i++)
    {
        for(x = i + 1; x < N_O_G; x++)
        {

            if(mar[x] < mar[i])
            {
                	z = mar[i];
                	mar[i] = mar[x];
                	mar[x] = z;
            }
        }
    }
   
    for(i=0; i<N_O_G; i++)
    {
    
        if(mar[i]<60){
        	E++;
        	S_O_G = S_O_G + mar[i+1];
		}
		if(mar[i]>=60&&mar[i]<=69){
        	D++;
        	S_O_G = S_O_G + mar[i];
		}
		if(mar[i]>=70&&mar[i]<=79){
        	C++;
        	S_O_G = S_O_G + mar[i];
		}
		if(mar[i]>=80&&mar[i]<=89){
        	B++;
        	S_O_G = S_O_G + mar[i];
		}
		if(mar[i]>=90&&mar[i]<=100){
        	A++;
        	S_O_G = S_O_G + mar[i];
		}
		
    }
    
    mean = S_O_G / N_O_G;
    min = mar[1];
    max = mar[N_O_G-2];
    total = A+B+C+D+E-1;
    
cout<<endl;
cout << "****** Exam Grades ****** "<<endl<<endl;
    cout<<"	90 - 100: "<<A<<endl;
    cout<<"	80 - 89: "<<B<<endl;
    cout<<"	70 - 79: "<<C<<endl;
    cout<<"	60 - 69: "<<D<<endl;
    cout<<"	< 60: "<<E-1<<endl;
    
    cout<<endl;
    cout << "	Total score: "<<total<<endl;
    cout << "	Mean: "<<mean<<endl;
    cout << "	Min: "<<min<<endl;
    cout << "	Max: "<<max<<endl<<endl;

cout << "**** THE END OF REPORT ****"<<endl;
 
 
    return 0;
}
