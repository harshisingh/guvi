#include <stdio.h>

int main(void) {
	int N,i,a[20],max;

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d\t",&a[i]);
	}
	max=a[0];
	for(i=0;i<N;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max);
	
	return 0;
}
