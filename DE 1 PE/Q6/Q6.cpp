#include <stdio.h>
#include <string.h>
#include <ctype.h>

char input(char str[101]);
char output(char str[101]);

int main () {
	char str[101];
	
	input(str);
	output(str);
	
	return 0;
}

char input(char str[101]) {
	fgets (str, sizeof(str), stdin);
}

char output(char str[101]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if(i % 2 == 0) {
			str[i] = toupper(str[i]);
		}
	}
	printf("%s", str);
	return 0;
}
