#include <stdio.h>

int main(void) {
	int n,a[15],t;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(int i=0;i<n;i++)
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
	for(int i=0;i<n;i++)
	{
		if(a[i] == a[i+1])
		{
			printf("%d",a[i]);
			break;
		}
	}
	
	return 0;
}
