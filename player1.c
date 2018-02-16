#include <stdio.h>

int main(void) {
	long  fact=1;
	int n,i;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n>20)
	{
	printf("Invalid input");
	return 0;
	}
	else
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is: %ld ",fact);
	
	
	return 0;
}
