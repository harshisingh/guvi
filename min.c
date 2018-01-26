#include <stdio.h>

int main(void) {
	int N,i,a[20],min;

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d\t",&a[i]);
	}
	min=a[0];
	for(i=0;i<N;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("%d",min);
	
	return 0;
}
