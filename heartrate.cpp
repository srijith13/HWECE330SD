#include <iostream>
#include <iomanip>
#include <string>
#include "HeartRate.h"

using namespace std;

HeartRates::HeartRates(const string &Last, const string &First,int mb,int db,int yb)
{
  LastName = Last;
  FirstName = First;
  MonthBirth = mb;
  DateBirth = db;
  YearBirth = yb;
}

void HeartRates:: setLastName (const string &Last)       
{
  LastName = Last;
}


string HeartRates:: getLastName () const                
{
  return LastName;
}
void HeartRates:: setFirstName (const string &First)        
{
  FirstName = First;
}


string HeartRates:: getFirstName () const                  
{
  return LasFirstName;
}  

void HeartRates::setMonthB (const int mb)               
{
  MonthBirth = mb;
}

void HeartRates:: getMonthB () const                            
{
  return MonthBirth;
}

void HeartRates::setDateB (const int db)
{
  DateBirth = db;
}

void HeartRates:: getDateB () const
{
  return DateBirth;
}

void HeartRates::setYearB (const int yb)
{
  YearBirth = yb;
}


void HeartRates:: getYearB () const
{
  return YearBirth;
}

int HeartRates::getAge()
{
  int Ta = 0;
  Ta = 2021 - YearBirth;
}

int HeartRates::getMaximumHeartRate()
{
  int MHR = 0;
  MHR = 220 - getAge();
}

int HeartRates::getTargetHeartRate()
{
  int THR = 0;
  THR = (0.60 * getMaximumHeartRate());
}

void HeartRates:: printHeartRate ()         
{
  cout << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " << endl;
  cout << "Month: " << getMonthB ()<< "Date: " << getDateB ()<< "Year:  " << getYearB () << endl;
  cout << "Age: " << getAge() << endl;
  cout << "Maximum Heart Rate: " << getMaximumHeartRate() << endl;
  cout << "Target Heart rate: " << getTargetHeartRate() << endl;
}

