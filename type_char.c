//UPPERCASE CHARACTERS, LOWERCASE CHARACTERS, NUMBERS, SPECIAL CHARACTERS

#include <stdio.h>

int main() {
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	if(ch >= 65 && ch <= 90) {
		printf("\n%c is Uppercase Character", ch);
	}
	else if(ch >= 97 && ch <= 122) {
		printf("\n%c is Lowercase Character", ch);
	}
	else if(ch >= 48 && ch <= 57){
		printf("\n%c is a number", ch);
	}
	else{
		printf("\n%ch is a special character", ch);
	}
}

/**
OUTPUT:
--------
Enter a character : 3

3 is a number
**/

