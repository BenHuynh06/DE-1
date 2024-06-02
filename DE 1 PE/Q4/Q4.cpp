#include <stdio.h>

void paliTriangle(int, int);

int main () {
	int n; 
	int m;
	printf ("Row = "); scanf ("%d", &n); 
	
	paliTriangle(n, m);
	
	return 0;
}


// Copy cai nay
void paliTriangle(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++){
			printf ("%d", i);
		}
		printf ("\n");
	}
}
