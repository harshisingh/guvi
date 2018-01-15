#include <stdio.h>

int main(void) {
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
            if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	printf("Alphabet\n");
	else
	printf("No");
	return 0;
}
