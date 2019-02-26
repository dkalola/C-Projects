#include <iostream>
using namespace std;
 
int main()
{

double marksInput = 0,minScore = 100,maxScore = 0,meanScore = 0,totalMarks = 0,totalPoints; //Grades imput , maximum, minimum, mean value, total score
int A = 0,B = 0,C = 0,D = 0,E = 0; // Grades A B C D E
int i = 1; // Temporary varibles
	do{
		
		totalMarks = marksInput + totalMarks;
		cout<<"Please Enter your marks here "<<i<<" : ";
		cin>>marksInput;
		
		if(marksInput >= 90 && marksInput <= 100){
		
			if (marksInput > maxScore){
				maxScore = marksInput;
			}
				if (marksInput <= minScore&& marksInput != -888){
				minScore = marksInput;
			}
			
			A++;
		}
		
		if(marksInput >= 80 && marksInput <= 89){
			
			if (marksInput > maxScore){
				maxScore = marksInput;
			}
				if (marksInput <= minScore&& marksInput != -888){
				minScore = marksInput;
			}
			
			B++;
		}
		
		if(marksInput >= 70 && marksInput <= 79){
		
			if (marksInput > maxScore){
				maxScore =marksInput;
			}
				if (marksInput <= minScore&& marksInput != -888){
				minScore = marksInput;
			}
			
			C++;
		}
	
		if(marksInput >= 60 && marksInput <= 69){
			
			if (marksInput > maxScore){
				maxScore = marksInput;
			}
				if (marksInput <= minScore&& marksInput != -888){
				minScore = marksInput;
			}
			
			D++;
		}
		
		if(marksInput < 60){
		
			if (marksInput > maxScore){
				maxScore = marksInput;
			}
			if (marksInput <= minScore && marksInput != -888){
				minScore = marksInput;
			}
			
			E++;
		}
	
	
		
		i++;
	}

	while(marksInput != -888);
	
	totalPoints = A+B+C+D+E-1;
	meanScore = (totalMarks) / (totalPoints);
    cout << endl;
cout << "****** Exam Grades ****** "<<endl<<endl;
     cout<<"	90 - 100: "<<A<<endl;
    cout<<"	80 - 89: "<<B<<endl;
    cout<<"	70 - 79: "<<C<<endl;
    cout<<"	60 - 69: "<<D<<endl;
    cout<<"	< 60: "<<E-1<<endl;
    
    cout<<endl;
    cout << "	Total Points: "<<totalPoints<<endl;
    cout << "	Mean: "<<meanScore<<endl;
    cout << "	Min: "<<minScore<<endl;
    cout << "	Max: "<<maxScore<<endl<<endl;

cout << "**** THE END OF REPORT ****"<<endl;
 
 
    return 0;
}
