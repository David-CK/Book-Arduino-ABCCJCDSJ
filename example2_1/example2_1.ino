/*
 Name:		example2_1.ino
 Created:	5/28/2016 6:46:09 PM
 Author:	David
*/

#define AA

// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
#ifdef A
	digitalWrite(9, HIGH);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(1000);

	digitalWrite(9, LOW);
	digitalWrite(10, HIGH);
	digitalWrite(11, LOW);
	delay(1000);

	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, HIGH);
	delay(1000);
#endif

#ifdef AA
	digitalWrite(9, HIGH);
	digitalWrite(11, LOW);
	delay(1000);

	digitalWrite(10, HIGH);
	digitalWrite(9, LOW);
	delay(1000);

	digitalWrite(11, HIGH);
	digitalWrite(10, LOW);
	delay(1000);
#endif
}
