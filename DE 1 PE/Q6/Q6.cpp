#include <stdio.h>

void Input(int arr[100], int n);
int sumArray(int arr[100], int n);

int main() {
	int n, arr[100];
	
	Input(arr, n);
	int ketqua = sumArray(arr, n);
	printf ("Ket qua = %d", ketqua);
	
	return 0;
}

void Input(int arr[100], int n) {
	printf ("n = "); scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

int sumArray(int arr[100], int n) {
	return arr[0] + arr[n - 1];
}

void Output(int arr[100], int n) {
	
}
