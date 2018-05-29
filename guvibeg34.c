#include <stdio.h>
#include <string.h>

int main(void) {
	char s[50];
	int c = 0;
	gets(s);
	for(int i = 0;i<strlen(s);i++)
	{
		if(s[i] == 46)
		c++;
	}
	printf("%d",c+1);
	return 0;
}
