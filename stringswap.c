#include <stdio.h>
#include<string.h>

int main(void) {
	int i;
	
	char s[20],t;
	gets(s);
	
	for(i=0;i<strlen(s);i=i+2)
	{
		t=s[i];
		s[i]=s[i+1];
		s[i+1]=t;
	}
printf("%s",s);
	return 0;
}
