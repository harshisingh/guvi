#include <stdio.h>

int main(void) {
	int N,K,i,b[20],s=0;
	printf("Enter 1st number\n");
	scanf("%d",&N);
	printf("Enter 2nd number\n");
	scanf("%d",&K);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=K;i++)
	s=s+i;
	printf("%d",s);
	return 0;
}
