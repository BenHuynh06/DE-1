#include <stdio.h>

float check(float a, float b); 

int main () {
	float a, b;
	float x;
	
	printf ("Nhap a = ");
	scanf ("%f", &a);
	
	printf ("Nhap b = ");
	scanf ("%f", &b);
	
	// Goi ham
	x = check(a, b);
	
	return 0;
}

// Ham tinh ax + b = 0
float check (float a, float b) {
	if(a != 0) {
		float x = - b/a; 
		printf ("%fx + %f = 0\n", a, b);
		printf ("Ket qua: x = %.2f\n", x);
		return x;
	} else {
		printf ("Phuong trinh vo nghiem.");
		return 0;
	}
}
