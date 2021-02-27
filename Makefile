all: heartrate.o
	g++ heartrate.o  heart

heartrate.o: heartrate.cpp HeartRate.h
	g++ -cpp  heartrate.cpp

clean:
	rm *.o
	rm heart
