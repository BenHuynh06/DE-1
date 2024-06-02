#include <stdio.h>

void Input(int arr[100], int n);
void check(int arr[100], int n);

int main () {
	int n;
	printf ("n = "); scanf ("%d", &n);
	int arr[100]; 

	Input(arr, n);
	check(arr, n);
	
	return 0;
}

void Input(int arr[100], int n) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", &arr[i]);
	}
}

// Ham check va in ra man hinh so lan xuat hien.
void check(int arr[100], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] != 1) {
			int count = 1;
				for (int j = i + 1; j < n; j++) {
					if (arr[i] == arr[j]) {
						count++;
						arr[j] = 1;
				}
			}
			printf ("%d - %d\n", arr[i], count);
		} 
	}
}
 
