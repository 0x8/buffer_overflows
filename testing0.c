//Nullp0inter's Glorios into to buffer overflows
//This file is just a test to confirm some of my suspicions
//You can ignore it or play with it if you want

#include <stdio.h>
#include <stdlib.h>

void success() {

	printf("You win, dammit!\n");
	printf("Congratulations the buffer has been broken,\n");
	printf("The vars have been written\n");
	
	return;

}

void failure() {
	
	printf("\n\nSorry m8, not so gr8 n8. Definitely not an 8/8.\n");
	printf("In normie talk, you lose\n\n");
	
	return;

}

int main() {
	
	char buff[10];
	int overwriteMe = 0;
	int beSpecific = 0;
	void (*myFPtr)();
	
	myFPtr = &failure;
	
	scanf("%s",buff);
	
	printf("\n\noverwriteMe  : %x\n",overwriteMe);
	printf("beSpecific   : %x\n",beSpecific);
	printf("myFPtr       : %p\n\n", myFPtr);
		
	if(overwriteMe != 0) {
		printf("\n\ngz m8, you done broke down the first wall!\n\n");
		if(beSpecific == 0x1337FFFF) {
			printf("\n\nOH DANG! You done broke the second wall!\n\n");
			myFPtr();
		} else {
			printf("\n\nDamn, the second wall lives\n\n");
		}
	}
	
	myFPtr();
	
	return 0;

}
