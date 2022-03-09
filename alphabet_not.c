//Program to check whether character is alphabet or not.

#include <stdio.h>

int main() {
	char ch;
	printf("Enter character : ");
	scanf("%c", &ch);
	printf("\n");
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		printf("%c is an alphabet.", ch);
	}
	else{
		printf("%c is not an alphabet.", ch);
	}
}
