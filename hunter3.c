#include <stdio.h>

int main(void) {
	int a[25],c[20],t,f=0,n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(int i=0;i<n;i++)
	{
			if(a[i] == i)
			{
				c[f]=a[i];
		                        f++;
			}
		         
		
	}
	for(int i=0;i<f;i++)
	{
		if(c[i] > c[i+1])
		{
			t = c[i];
			c[i] = c[i+1];
			c[i] = t;
		}
	}
	if(f != 0)
	{
		for(int i=0;i<f;i++)
	            printf("%d ",c[i]);
	}
	else
	printf("-1");
	
	return 0;
}
