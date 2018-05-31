#include <stdio.h>

int main(void) {
	int n,r,sum = 0,s;
	scanf("%d",&n);
	while(n >= 1)
	{
		r = n % 10;
		s = r * r;
		sum = sum + s;
		n = n/10;
	}
	printf("%d",sum);
	return 0;
}
