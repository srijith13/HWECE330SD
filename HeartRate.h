//HeartRate.h


#ifndef HEARTRATES
#define HEARTRATES
#include <string>

using namespace std;

class HeartRates{
 public:
	 HeartRates(const string & ="" , const string & ="",int =0,int =0,int =0)
	 void setLastName (const string &);    
	 string getLastName () const;                
 	 void setFirstName (const string &);  
  	 string getFirstName () const;                 
	 void setMonthB(const int);                 
 	 int getMonthB () const;
         void setDateB(const int);               
 	 int getDateB () const; 
	 void setYearB(const int);                  
 	 int getYearB () const;
	 int getAge();

      	 int getMaximumHeartRate();
 	 int getTargetHeartRate();	 
	 void printHeartRate ();
	 
 private:
	  string myLastName;        
	  string myFirstName;
	  int MonthBirth;
	  int DateBirth;
	  int YearBirth;


};
