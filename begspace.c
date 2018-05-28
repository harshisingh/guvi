#include <stdio.h>
#include <string.h>

int main(void) {
	char s[50];
	int c = 0;
	gets(s);
	for(int i = 0;i<strlen(s);i++)
	{
		if(s[i] == 32)
		c++;
	}
	printf("%d",c);
	return 0;
}
