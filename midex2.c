#include <stdio.h>
#define MY_SHA3_HASH_LAST_TWO_DIGIT_NUMBER 94
int func1(){
	printf("Not good\n");
	return -1;
}

int func2(){
	printf("The Secret Password is secret!!!\n");
	return 1;
}
void main1(){
	char buffer[MY_SHA3_HASH_LAST_TWO_DIGIT_NUMBER];
	scanf("%s", buffer);
	func1();
}
void main(){
	main1();
}
