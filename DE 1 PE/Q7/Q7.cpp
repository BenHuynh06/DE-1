#include <stdio.h> 
int checkSum(int arr[], int n);
int sumArray(int arr[], int n);

int main () {
	int n, arr[n];
	
	printf ("n = ");
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf ("%d", &arr[i]);
	}
	
	getchar();
	checkSum(arr, n);
	sumArray(arr, n);
	
	return 0;
}

int checkSum(int arr[], int n) {
	
	return 0;
}

int sumArray(int arr[], int n) {
	
} 


