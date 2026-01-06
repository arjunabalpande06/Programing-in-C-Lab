#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
	int low = 0, high = size - 1;
	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if( arr[mid] < key){
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return 0;
}
int main() {
	int n, key;
	printf("No of  elements in the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d elements in sorted order: ", n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d", &key);
	int result = binarySearch(arr, n, key);
	if(result != -1){
		printf("Element %d found at index %d\n", key, result);
	}
	else {
		printf("Element not gound ");
}
