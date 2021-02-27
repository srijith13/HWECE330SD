#include<iostream>
#include"HeartRate.h"
using namespace std;

int main()
{
	string Fname,Lname,DBR,MBR,YBR;
	HeartRate HeartRates;
	cout<<"\n Please enter full name: "<<endl;
	getline(cin, Fname);
	myHeartRate.setfullname(Fname);
        cout<<endl;
	cout<<"\n Please enter date of birth: "<<endl;
        getline(cin, DBR);
        myHeartRate.setptsname(DBR);
        cout<<endl;
	cout<<"\n Please enter month birth: "<<endl;
        getline(cin, MBR);
        myHeartRate.setptsname(MBR);
        cout<<endl;
	cout<<"\n Please enter year of birth: "<<endl;
        getline(cin, YBR);
        myHeartRate.setptsname(YBR);
        cout<<endl;

}
