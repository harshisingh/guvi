#include <stdio.h>

int main(void) {
	int n,k,a[12],i,t,c;
	scanf("%d %d\n",&n,&k);
	for(i = 0;i < n;i++)
	{
		scanf("%d ",&a[i]);
	}
	while(t < k)
	{
	c = a[n-1];
	for(i = n-1;i > 0;i--)
	{
		a[i] = a[i-1];
	}
	a[0] = c;
	t++;
	}
	for(i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
