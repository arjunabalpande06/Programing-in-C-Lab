#include<stdio.h>
int main()
{
	int N, first = 0, second = 1, next;
	printf("n: ");
	scanf("%d",&N);
	if(N<=0)
	{
		printf("Please enter a positive integer.\n");
	}
	else
	{
		printf("%d ",first);
		for(int i = 1; i < N; i++)
			{
				if(i == 1)
				{
					printf("%d ",second);
				}
				else
				{
					next = first + second;
					first = second;
					second = next;
					printf("%d ",next);
				}
			}
		printf("\n");
	}
	return 0;
}
