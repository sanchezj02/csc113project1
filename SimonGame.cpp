#include <Arduino.h>
int LedSequence[100]; //will store random sequence of 100 numbers for LEDs

/*
 * This function initializes the array of random generated sequence of LEDs
 */
void initialization()
{
	for (int i = 0; i < 100; i++ )
	{
		LedSequence[i] = random(5); //will generate random numbers from 0 - 4 for LED representation and fill the array
	}
}

void setup() {
initialization();
}

void loop() {

}
