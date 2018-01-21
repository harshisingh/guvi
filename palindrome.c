#include <stdio.h>

int main(void) {
	int n,a,b,rev=0,i;
	scanf("%d",&n);
	a=n;
            while(a!=0)
	{
		b = a%10;
		rev = rev*10 + b;
		a = a/10;
	}
	if(n==rev)
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}
