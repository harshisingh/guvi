#include <stdio.h>

int main(void) {
	int n,a[20],c,t;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(int i = 0;i < n-1;i++)
	{
		for(int j = i+1;j < n;j++)
		{
				if(a[i] > a[j])
		                        {
			                      t=a[i];
			                      a[i]=a[j];
			                      a[j]=t;
		                        }
		}
	}
	int i = 0;
	while(i < n)
	{
	           if(a[i] == a[i+1])
	           {
	           	i = i+2;
	           }
	           else
	           {
	           	c = a[i];
	           	break;
	           }
	}
	printf("%d",c);
	
	return 0;
}
