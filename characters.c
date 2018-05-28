#include <stdio.h>
#include <string.h>

int main(void) {
	char s[15];
	int c = 0;
	gets(s);
	for(int i = 0;i<strlen(s);i++)
	{
		if((33 <= s[i]) && (s[i] <= 64))
		c++;
		if((97 <= s[i]) && (s[i] <= 122))
		c++;
	 
	}
	printf("%d",c);
	return 0;
}
