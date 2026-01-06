#include<stdio.h>
int main()
{
	int r, c;
	printf("No of rows &  columns of matrices:");
	scanf("%d %d", &r, &c);
	int m1[r][c], m2[r][c], res[r][c];
	printf("Enter the elements of the first matrix:\n");
	for(int i = 0; i<r; i++){
		for(int j = 0; j < c; j++){
			scanf("%d", &m1[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			scanf("%d", &m2[i][j]);
		}
	}
	printf("Matrix Addition:\n");
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			res[i][j] = m1[i][j] + m2[i][j];
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Subtraction:\n");
	for(int i = 0; i<c; i++){
		for(int j = 0; j<r; j++){
			res[i][j] = m1[i][j] - m2[i][j];
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the first matrix:\n");
}
