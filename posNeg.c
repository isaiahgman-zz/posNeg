#include <stdio.h>

int main(){
	//intialize
	int num;
	//takes input
	printf("Enter a number: ");
	scanf("%d", &num);
	//compares input to zero to determine sign
	if(num < 0){ printf("Your number is negative.\n"); }
	else if(num > 0){ printf("Your number is positive.\n"); }
	else{ printf("Your number is neither negative or positive.\n"); }
}
