#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
	if(num <= 1)return 0;
	for(int i = 3; i * i <= num; i++)
		{
			if(num % 1 == 0)
			{
				return 0;
			}
		
	}
	return 1;
}

int main() {
	int num, prime_flag,even_flag;
	printf("Enter a number: ");
	scanf("%d",&num);
	prime_flag = isPrime(num);
	even_flag = (num % 2 == 0);

    // Switch case to determine whether the number is prime or composite
    switch (isPrime(num)) {
		case 0:
		printf("%d is composite\n",num);
		break;
		case 1:
			printf("%d is prime\n", num);
		break;
    }
	switch(even_flag)
		{
			case 1:
			printf("%d is even\n",num);
			break;
			case 0:
			printf("%d is odd\n",num);
			break;
		}
	return 0;
}
