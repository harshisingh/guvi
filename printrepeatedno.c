#include <stdio.h>

int main(void) {
	int n,t,a[10],c[10];
	scanf("%d\n",&n);
	for(int i=0;i<n+1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=i+1;j<n+1;j++)
		{ 
			
		            if(a[i] > a[j])
		            {
		            	t=a[i];
			            a[i]=a[j];
			            a[j]=t;
		            }
		}            
	}
	
	int i=0;
	while(i < n+1)
	{
		if(a[i] == a[i+1])
		{
			printf("%d ",a[i+1]);
			i=i+2;
		}
		else
		i++;
		
	}
	
	return 0;
}
