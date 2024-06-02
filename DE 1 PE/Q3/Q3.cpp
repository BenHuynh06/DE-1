#include <stdio.h>
#include <stdbool.h>

void Input(int n, int arr[10]);
bool checkOdd(int num);
float avgOdd(int n, int arr[10]);

float average;

int main () {
	int n;
	int num;
	int arr[10];
	
	printf ("n = "); scanf ("%d", &n);
	
	Input(n, arr);
	::average = avgOdd(n, arr);
	printf ("%.2f", average);
	
	return 0;
}

// Ham nay co the de bai da cho san. Neu chua cho thi cac ban copy vao cung dc
void Input (int n, int arr[10]) {
	for (int i = 0; i < n; i++){
		scanf ("%d", &arr[i]);
	}
}

// Ham kiem tra so le
bool checkOdd(int num) {
	return num % 2 != 0;
}

// Tinh trung binh cac so le
float avgOdd(int n, int arr[10]) {
	int count = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (checkOdd(arr[i])) {
			sum += arr[i];
			count++;
		}
	}
	if (count == 0) {
		return 0;
	} 
	return (float)sum / count;
}
