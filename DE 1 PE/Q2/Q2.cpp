#include<stdio.h>

// Bai nay co 2 cach cac ban doc de bai va chon cach phu hop nha

void check(int a[3]);
//void check2 (int, int, int);


int main () {
	int a[3];

	check (a);
//	int a, b, c;
//	check2(a, b, c);
		
	return 0;
}

// Cach 1
void check (int a[3]) {
	for (int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	
	for (int i=0;i<3;i++)
	{ 
		if (a[i]<min) min=a[i];
	}
	
	// Khong can copy doan in nay
	printf("%d",min);
}

// Cach 2 
//void check2 (int a, int b, int c) {
//	printf ("So thu 1: "); scanf ("%d", &a);
//	printf ("So thu 2: "); scanf ("%d", &b);
//	printf ("So thu 3: "); scanf ("%d", &c);
//	
//	int min = a;
//	if (b < min || c < min) {
//		if(b < c) {
//			min = b;
//		} else {
//			min = c;
//		}
//	}
//	
//	// Doan nay khong can copy vao bai thi nha cac ni
//	printf ("==================================\n");
//	printf ("Ket qua: %d\n", min);
//}
