#include<iostream>
#include <string>
#include "HeartRate.h"

int main()
{
  HeartRate
  HR1 ("James", "Bond", 12, 12, 1974),
  HR2 ("Hrpret", "Jim", 10, 29, 1999),
  HR3 ( "House", "Gregary", 06, 06, 1987),
  HR4 ("Deckker", "Cloe", 02, 28, 2006);


  HR1.printHeartRate();
  HR2.printHeartRate();
  HR3.printHeartRate();
  HR4.printHeartRate();
  

}

