#include <stdio.h>
#include <string.h>
#include <ctype.h>

char input(char str[]);
void to_lower (char str[]);
void output(char str[]);

int main () {
	char str[1001];
	
	input (str);
	to_lower (str);
	output (str);
	return 0;
}

char input(char str[]) {
	fgets (str, 1001, stdin);
}

void to_lower(char str[]) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
	}
}

void output(char str[]) {	
	for (int i = 0; str[i] != '\0'; i++) {
		if(i % 2 == 0) {
			str[i] = toupper(str[i]);
		}
	}
	printf ("%s", str);
}
