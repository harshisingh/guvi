#include <stdio.h>

int main(void) {
	int n,i,factorial=1;
	scanf("%d",&n);
	if(n<=0)
	printf("Invalid input");
	else
	{
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
	}

	return 0;
}
