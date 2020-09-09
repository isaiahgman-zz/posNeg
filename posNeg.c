#include <stdio.h>

int main(){
	
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num < 0){
		printf("Your number is negative.\n");
	}
	else if(num > 0){
		printf("Your number is positive.\n");
	}
	else{
		printf("Your number is neither negative or positive.\n");
	}
}
