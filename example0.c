//Nullp0inter's Glorious intro to Buffer Overflows
//This one is just the basics, the buffer overfloweth with cyber riches yall

#include <stdio.h>

int main() {
	
	char buff[10];
	int overwriteMe = 0;
	
	scanf("%s",buff);
	
	if(overwriteMe == 0) {
		printf("Really man? This is some elementary stuff\n");
		printf("Sorry, but you done goofed it all up.\n");
		return 1;
	}
	
	else {
		printf("See! Not so bad, you got it!\n");
	
	}
	
	return 0;
}
