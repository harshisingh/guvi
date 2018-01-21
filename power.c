#include <stdio.h>
#include <math.h>
int main(void) {
	int n,p,a;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Enter power\n");
	scanf("%d",&p);
	a=pow(n,p);
	printf("%d",a);
	return 0;
}
