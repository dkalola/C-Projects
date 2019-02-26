#include <iostream>
#include <string>
#include<time.h>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	char date[10];
	_strdate(date);
	cout <<"Today's date is: "<< date << endl;


	int typ;
	string c_name;
	string str;	
	
	cout << "-----------------HELLO. Please enter the name of your company.------------------"<<endl;
	cin >> c_name;
	cout << "WELCOME "<< c_name<<endl;
	
	cout << "-----------------HELLO. Please enter the type of your company.------------------"<<endl;
	cout << "	TYPE \n		1   =   Cotton refining \n		2   =   Oil extraction \n		3   =   MIX(inclued both types)" <<endl<<endl;
	cin >> typ;
	
	switch(typ) {
		
		case 1: cout << "                    Cotton refining \n"<< endl;
	
	int Rate1;
	int Rate2;
		cout << "------------------------------------------------------------------\n";
	cout << "Enter the daily rate of the cottor bar: ";
	cin >> Rate1 ;
	cout << "Enter the rate of the seeds(per 20 KG): ";
	cin >> Rate2;
	cout <<  " \nDaily rate of the cottor bar: "<< Rate1 <<endl <<"Rate of the seeds (per KG): "<< 	Rate2/20<<endl<<"------------------------------------------------------------------"<<endl;
	
do{
	int b_number;
	int s_number;
	int p_number;
	int vehicle_f_w;
	int vehicle_l_w;
	string name;
	int ans;	
	cout << "Enter your bill numner: ";
	cin >> b_number;
	cout << "Enter the company name(customer): ";
	cin >> name ;
	cout << "Enter the wieght of the vehicle: ";
	cin >> vehicle_f_w;
	cout << "Enter the weight of the vehicle after loading: ";
	cin >> vehicle_l_w; 
	cout << "Enter the amount of the cottor bars: ";
	cin >> p_number;
	cout << "-------------------If you wish to change amount enter 1 --------------------------"<<endl;
	cin >> ans;
	
	if( ans == 1){
		cout << "Rewrite your quantity (Cotton bars): ";
		cin >> p_number;	
		cout << "Rewrite your quantity (seeds): ";
		cin >> s_number;
	}
	else {
		cout<< "your unchages amounts are: "<<p_number << " and "<<s_number<<endl;
			cout << "------------------------------------------------------\n\n";
	}
		cout << "your final number is "<< p_number<<endl;
		cout << "you total is "<<Rate1 * p_number<<endl;
		cout << "Thank you for buying our product \n\n";
		cout << "---------------------------you bill---------------------------\n\n";
		cout << name <<endl;
		cout << "Your bill number: "<< b_number<<endl;
		cout << "Number of cootn bar: "<<p_number<<endl;
		cout << "Weight of product: "<< (vehicle_l_w - vehicle_f_w)<<endl;
		cout << "Weight of going vehicle: "<< vehicle_l_w<< endl;
		cout << "Total amout of cotton bars: "<<Rate1 * p_number<<endl;
		cout <<"Total amout of seeds(kg): "<< Rate2 * ((vehicle_l_w - vehicle_f_w)/20)<<endl;
		cout << "Total amout: "<< (Rate1 * p_number)+(Rate2 * ((vehicle_l_w - vehicle_f_w)/20))<<endl;
		
		
	ifstream indata;
	ofstream outdata;
	outdata.open("Bills(cotton).csv", ios::app);
	outdata << "Your bill number:  "<< b_number << endl;
	outdata << "TOdays date is:"<< date << endl;
	outdata << "Your customer name:  "<< name << endl;
	outdata << "Number of cootn bar:  "<<p_number << endl;
	outdata << "weight of product:  "<< vehicle_l_w - vehicle_f_w << endl;
	outdata << "Weight of going vehicle: "<< vehicle_l_w<< endl;
	outdata << "Total amout of cotton bars:  "<<Rate1 * p_number << endl;
	outdata << "Total amout of seeds(kg):  "<< Rate2 * ((vehicle_l_w - vehicle_f_w)/20) << endl;
	outdata << "Total amout:  "<< (Rate1 * p_number)+(Rate2 * ((vehicle_l_w - vehicle_f_w)/20)) << endl;
	outdata << " -------------- " << endl;
	
	indata.open("Bills(cotton).csv");
	string cell1;

	indata >> cell1;

	cout << cell1 ;

	system("pause");
 	
	cout << "Enter next to continue: " <<endl;
	cin >> str;		
}


while( str != "exit");		
			
	
	
	
	
		break;
		
		case 2: cout << "                    Oil extraction"<<endl;
	
	
	
	
		
	int Rate_oil;
	int Rate_waste;
	int Rate_seeds;
	cout << "------------------------------------------------------------------\n";
	cout << "Enter the daily rate of OIL(per kg) :  ";
	cin >> Rate_oil ;
	cout << "Enter the rate of WASTE(per kg) :  ";
	cin >> Rate_waste;
	cout << "Enter the rate of KHOD - crushed seeds (per bag) :  ";
	cin >> Rate_seeds;
	cout <<endl<<  " Daily rate of OIL: "<< Rate_oil <<endl <<"Rate of the crushed seeds (per bag): "<< Rate_seeds<<endl<< "Rate of wastes (per kg): "<<Rate_waste<<endl<<"------------------------------------------------------------------"<<endl;
	
do{
	int b_number;
	int w_number;
	int p_number;
	int vehicle_f_w;
	int vehicle_l_w;
	string name;
	int ans;	
	cout << "Enter your bill numner: ";
	cin >> b_number;
	cout << "Enter the company name(customer): ";
	cin >> name ;
	cout << "Enter the number of oil (per kg): ";
	cin >> p_number;
	cout << "Enter the number of waste barrels: ";
	cin >> w_number;
	cout << "-------------------If you wish to change amount enter 1 --------------------------"<<endl;
	cin >> ans;
	
	if( ans == 1){
		cout << "Rewrite your quantity (oil per kg): ";
		cin >> p_number;	
		cout << "Rewrite your quantity (waste per kg): ";
		cin >> w_number;
	}
	else {
		cout<< "your unchages amounts are: "<<p_number << " and "<<w_number<<endl;
			cout << "------------------------------------------------------\n\n";
	}
		cout << "your final number of barrels "<< p_number<<endl;
		cout << "you total is "<<Rate_oil * p_number<<endl;
		cout << "Thank you for buying our product \n\n";
		cout << "---------------------------you bill---------------------------\n\n";
		cout << name <<endl;
		cout << "Your bill number: "<< b_number<<endl;
		cout << "Number of oil barrels: "<<p_number<<endl;
		cout << "Total amout of waste (per k): "<<Rate_waste * w_number<<endl;
		cout << "Total amout: "<< (Rate_oil * p_number)+(Rate_waste * w_number )<<endl;
		
		
	ifstream indata;
	ofstream outdata;
	outdata.open("Bills(oil).csv", ios::app);
	outdata << "Your bill number:  "<< b_number << endl;
	outdata << "Todays date is: "<< date << endl;
	outdata << "Your customer name:  "<< name << endl;
	outdata << "Number of oil barrels:  "<<p_number << endl;
	outdata << "Total amout of oil:  "<<Rate_oil * p_number << endl;
	outdata << "Total amout of waste:  "<< Rate_waste * w_number  << endl;
	outdata << "Total amout:  "<< (Rate_oil * p_number)+(Rate_waste * w_number) << endl;
	outdata << " -------------- " << endl;
	
	indata.open("Bills(oil).csv");
	string cell1;

	indata >> cell1;

	cout << cell1 ;

	system("pause");
 	
	cout << "Enter next to continue: " <<endl;
	cin >> str;		
}
while( str != "exit");
		
		break;
		
		
		
		
		
		
		case 3: cout << "                    MIX (includes both types)"<<endl;
		
		
		
		
		
		
	int Rate_c_bar; // rates of cotton bars
	int Rate_o; // rates of oil
	int Rate_w; // rates of waste 
	int Rate_khod; // rates of waste seeds (khod)
	int Rate_s; // rates of seeds
	
	cout << "------------------------------------------------------------------\n";
	cout << "Enter the daily rate of the cottor bar: ";
	cin >> Rate_c_bar ;
	cout << "Enter the rate of the seeds(per 20 KG): ";
	cin >> Rate_s;
	cout << "Enter the daily rate of OIL(per liter) :  ";
	cin >> Rate_o ;
	cout << "Enter the rate of WASTE(per liter) :  ";
	cin >> Rate_w;
	cout << "Enter the rate of KHOD - crushed seeds (per bag) :  ";
	cin >> Rate_khod;
	cout <<endl<<  "Daily rate of the cottor bar: "<< Rate_c_bar <<endl <<"Rate of the seeds (per KG): "<< 	Rate_s/20<<endl<<"------------------------------------------------------------------"<<endl;
	cout <<  " Daily rate of OIL: "<< Rate_o <<endl <<"Rate of the crushed seeds (per bag): "<< Rate_khod<<endl<< "Rate of wastes (per liter): "<<Rate_w<<endl<<"------------------------------------------------------------------"<<endl;
	
	do{
	int b_number;
	int w_number;
	int p_number;
	int vehicle_f_w;
	int vehicle_l_w;
	int choice;
	string name;
	int ans;	
	cout << "Enter your bill numner: ";
	cin >> b_number;
	cout << "Enter the company name(customer): ";
	cin >> name ;
	cout << "Enter which type of the product u wan tot sell. \n";
	cout <<"      1  =  cotton"<< endl<< "      2  =  oil"<<endl;
	cin >> choice;
	cout << endl;
	
	
	switch (choice){
	
	
		case 1:
{
						
	cout << "---------------------cotton------------------------";
	int s_number;
	int vehicle_f_w;
	int vehicle_l_w;
	cout << "Enter the wieght of the vehicle: ";
	cin >> vehicle_f_w;
	cout << "Enter the weight of the vehicle after loading: ";
	cin >> vehicle_l_w; 
	cout << "Enter the amount of the cottor bars: ";
	cin >> p_number;
	cout << "-------------------If you wish to change amount enter 1 --------------------------"<<endl;
	cin >> ans;
	
	if( ans == 1){
		cout << "Rewrite your quantity (Cotton bars): ";
		cin >> p_number;	
		cout << "Rewrite your quantity (seeds): ";
		cin >> s_number;
	}
	else {
		cout<< "your unchages amounts are: "<<p_number << " and "<<s_number<<endl;
			cout << "------------------------------------------------------\n\n";
	}
		cout << "your final number is "<< p_number<<endl;
		cout << "you total is "<<Rate1 * p_number<<endl;
		cout << "Thank you for buying our product \n\n";
		cout << "---------------------------you bill---------------------------\n\n";
		cout << name <<endl;
		cout << "Your bill number: "<< b_number<<endl;
		cout << "Number of cootn bar: "<<p_number<<endl;
		cout << "Weight of product: "<< (vehicle_l_w - vehicle_f_w)<<endl;
		cout << "Weight of going vehicle: "<< vehicle_l_w<< endl;
		cout << "Total amout of cotton bars: "<<Rate1 * p_number<<endl;
		cout <<"Total amout of seeds(kg): "<< Rate2 * ((vehicle_l_w - vehicle_f_w)/20)<<endl;
		cout << "Total amout: "<< (Rate1 * p_number)+(Rate2 * ((vehicle_l_w - vehicle_f_w)/20))<<endl;
		
		
	ifstream indata;
	ofstream outdata;
	outdata.open("Bills(cotton).csv", ios::app);
	outdata << "Your bill number:  "<< b_number << endl;
	outdata << "Todays date is: "<< date << endl;
	outdata << "Your customer name:  "<< name << endl;
	outdata << "Number of cootn bar:  "<<p_number << endl;
	outdata << "weight of product:  "<< vehicle_l_w - vehicle_f_w << endl;
	outdata << "Weight of going vehicle: "<< vehicle_l_w<< endl;
	outdata << "Total amout of cotton bars:  "<<Rate1 * p_number << endl;
	outdata << "Total amout of seeds(kg):  "<< Rate2 * ((vehicle_l_w - vehicle_f_w)/20) << endl;
	outdata << "Total amout:  "<< (Rate1 * p_number)+(Rate2 * ((vehicle_l_w - vehicle_f_w)/20)) << endl;
	outdata << " -------------- " << endl;
	
	indata.open("Bills(cotton).csv");
	string cell1;
	indata >> cell1;

	cout << cell1 ;

	system("pause");
 	
	cout << "Enter next to continue: " <<endl;
	cin >> str;		
	}
			
			
			break;
		
	
case 2:
{
						
	cout<< "---------------------oil-----------------------";
	int b_number;
	int w_number;
	int p_number;
	string name;
	int ans;	
	cout << "Enter your bill numner: ";
	cin >> b_number;
	cout << "Enter the company name(customer): ";
	cin >> name ;
	cout << "Enter the number of oil (per kg): ";
	cin >> p_number;
	cout << "Enter the number of waste barrels: ";
	cin >> w_number;
	cout << "-------------------If you wish to change amount enter 1 --------------------------"<<endl;
	cin >> ans;
	
	if( ans == 1){
		cout << "Rewrite your quantity (oil per kg): ";
		cin >> p_number;	
		cout << "Rewrite your quantity (waste per kg): ";
		cin >> w_number;
	}
	else {
		cout<< "your unchages amounts are: "<<p_number << " and "<<w_number<<endl;
			cout << "------------------------------------------------------\n\n";
	}
		cout << "your final number of barrels "<< p_number<<endl;
		cout << "you total is "<<Rate_oil * p_number<<endl;
		cout << "Thank you for buying our product \n\n";
		cout << "---------------------------you bill---------------------------\n\n";
		cout << name <<endl;
		cout << "Your bill number: "<< b_number<<endl;
		cout << "Number of oil barrels: "<<p_number<<endl;
		cout << "Total amout of waste barrels: "<<Rate_waste * w_number<<endl;
		cout << "Total amout: "<< (Rate_oil * p_number)+(Rate_waste * w_number )<<endl;
		
		
	ifstream indata;
	ofstream outdata;
	outdata.open("Bills(oil).csv", ios::app);
	outdata << "Your bill number:  "<< b_number << endl;
	outdata << "Todays date is: "<< date << endl;
	outdata << "Your customer name:  "<< name << endl;
	outdata << "Number of oil barrels:  "<<p_number << endl;
	outdata << "Total amout of oil:  "<<Rate_oil * p_number << endl;
	outdata << "Total amout of waste:  "<< Rate_waste * w_number  << endl;
	outdata << "Total amout:  "<< (Rate_oil * p_number)+(Rate_waste * w_number) << endl;
	outdata << " -------------- " << endl;
	
	indata.open("Bills(oil).csv");
	string cell1;

	indata >> cell1;

	cout << cell1 ;

	system("pause");
 	
	cout << "Enter next to continue: " <<endl;
	cin >> str;		
	
}
	
			break;	
}

}
while( str != "exit");

	}
cout << endl;
cout << "-----------------------------";
cout << "Thankyou for using MY sotware\n";
cout << "SOFTWARE DIRECTOR AJAY Patel\n";
cout << "CONTAC NUMBER : +918140790695\n";




	return 0;
}
