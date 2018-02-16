#include <stdio.h>

int main(void) {
	int n,i,a=0,b;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		b=a+b*10;
		n=n/10;
	}
	printf("%d",b);
	
	return 0;
}
