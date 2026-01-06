#include <stdio.h>

int factorial(int n) {

	// write your code here
	if(n == 0 || n == 1){
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}
int main(){
	
	// write your code here
	int num;
	printf("n: ");
	scanf("%d", &num);
	if(num < 0){
		printf("Factorial is not defined for negative numbers:\n");
	}
	else {
		printf("Factorial of n is %d\n", factorial(num));
	}
}
