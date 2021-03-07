all: heartrate.o HR.o
	g++ heartrate.o HR.o -o  heart

heartrate.o: heartrate.cpp HeartRate.h
	g++ -cpp  heartrate.cpp
	
HR.o: HR.cpp HeartRate.h
	g++ -cpp  HR.cpp

clean:
	rm *.o
	rm heart
