#include <stdio.h>
#include<string.h>

int main(void) {
	char s[10],t;
	int i=0,j=0;
	printf("Enter a string\n");
	scanf("%s",&s);
	j=strlen(s) - 1;

		while(j>i)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
			i++;
			j--;
	}
	
	printf("%s",s);

	return 0;
}

