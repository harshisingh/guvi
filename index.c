#include <stdio.h>

int main(void) {
	int N,i,j,a[20],med,temp;

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d\t",&a[i]);
	}
	
	for(i=0;i<N;i++)
	printf("%d %d\n",a[i],i);
	
	return 0;
}
