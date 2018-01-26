#include <stdio.h>

int main(void) {
	int N,i,j,a[20],temp;

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d\t",&a[i]);
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			
	            	if(a[j]>a[j+1])
	            	{
	            		
	                         	temp=a[j];
	            	            a[j]=a[j+1];
	                        	a[j+1]=temp;
		            }
		}
		
	}
	for(i=0;i<N;i++)
	{
	printf("%d\t",a[i]);
	}
	return 0;
}
