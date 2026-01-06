#include <stdio.h>

	void acceptarray(int arr[], int size) {
		printf("Enter %d elements of the array: ", size);
		for (int i = 0; i < size; i++){
			scanf("%d", &arr[i]);
		}
	}

void selectionSort(int arr[], int size) {
	int temp;
	for(int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void displayarray(int arr[], int size){
			printf("Sorted array in ascending order: ");
			for(int i = 0; i<size; i++){
				printf("%d ", arr[i]);
			}
		printf("\n");
		}
int main()
		{
			int size;
			printf("No of elements in the array: ");
			scanf("%d",&size);
			int arr[size];
			acceptarray(arr, size);
			selectionSort(arr, size);
