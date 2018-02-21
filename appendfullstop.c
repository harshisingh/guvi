#include <stdio.h>
#include<string.h>

int main(void) {
	char stl[10],t;
	int i=0,j=0;
	printf("Enter a string\n");
	scanf("%s",&stl);
	j=strlen(stl);
	stl[j]='.';
	printf("%s",stl);

	return 0;
}
