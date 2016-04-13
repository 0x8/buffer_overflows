//Nullp0inter's Glorious Intro to Buffer Overflows
//Example 2!
//Strap in kiddos, it's gonna be a wild ride.

#include <stdio.h>

int main() {
	
	char buff[10];
	int overwriteMe = 0;
	
	printf("\nLast time, all you had to do was overflow with anything.\n");
	printf("How about something a little tougher this time?\n");
	printf("The goal now is to overwrite that int with a SPECIFIC value\n");
	printf("namely the value 0x1337\n");
	
	printf("\n\nLet's see if you got it (assuming piped python)\n");

	scanf("%s",buff);

	if(overwriteMe != 0x1337) {
		
		printf("Sorry, you failed.\n");
		
		return 1;
	}
	
	else {
		
		printf("Congrats, you overwrote overwriteMe!\n...With the correct value, no less!\n");
	
	}

	return 0;

}
