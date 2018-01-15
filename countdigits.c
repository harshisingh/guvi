#include <stdio.h>

int main(void) {
	int count=0,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	
	}
	printf("%d",count);
	return 0;
}
