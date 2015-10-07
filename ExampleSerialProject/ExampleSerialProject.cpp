// ExampleSerialProject.cpp : Defines the entry point for the console application.
//

#include "SerialCommsDll.h"

int main(int argc, char *argv[])
{
	// Specify COM port
	int nComPort = 1;

	// Open COM port
	SerialCommPort serial(1,BR115200);
	if(serial.isValid())
		printf("Success!\n");
	while(1){
	}
	return 0;
}

