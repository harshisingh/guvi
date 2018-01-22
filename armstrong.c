#include <stdio.h>

int main(void) {
	int b,a,n,cube=0;
	scanf("%d",&n);
	if(n<100000)
	{
	a=n;
	while(a>0)
	{
		b=a%10;
		cube=b*b*b+cube;
		a=a/10;
	}
	if(cube==n)
	printf("yes\n");
	else
	printf("no");
	}
	return 0;
}
