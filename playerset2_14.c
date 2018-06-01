#include <stdio.h>
#include <string.h>
int main(void) {
	char a[5] = {'a','e','i','o','u'},s[18];
	char A[5] = {'A','E','I','O','U'};
	int c;
	gets(s);
	for(int i = strlen(s);i >= 0;i--)
	{
		for(int j = 0;j < 5;j++)
		{
			if(s[i] == a[j] || s[i] == A[j])
			{
				c = 1;
				j = 5;
			}
			else
			c = 0;
		}
		if(c == 0)
		printf("%c",s[i]);
	}
	
	return 0;
}
