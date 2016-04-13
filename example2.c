//Nullp0inter's Glorious Intro to Buffer Overflows
//example 2, you can even overwrite pointers.
//Remember your little endian

#include <stdio.h>

void jumpToMeChildren() {
	printf("Ayyy Lmao\n");
	printf("You win!\n");
	return;
}

void dpp() {
	printf("Failure to hijack, this program will self destruct\n");
	printf("In 10 seconds, goodbye.\n");
	return;
}

int main() {

	char buff[10];
	void (*mFP)();
	//char buff[10];
	
	mFP = &dpp;
	printf("Go ahead and try to make the function return to jumpToMeChildren.\n");
	scanf("%s",buff);
	mFP();
	return 0;
}		
