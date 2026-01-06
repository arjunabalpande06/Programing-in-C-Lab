#include <stdio.h>
#include <stdlib.h>

// Function to perform selection sort
void selectionSort(int arr[], int size) {
	for(int i = 0; i < size -1; i++){
		int min = i;
		for(int j = i + 1 ; j < size; j++) {
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

int main() 
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter %d elements of the array: ", n);
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("Original array: ");
	for(int i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	selectionSort(a, n);
	printf("Sorted array: ");
	for(int i = 0; i<n; i++){
}
