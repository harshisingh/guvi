#include <stdio.h>

int main(void) {
	int n,a[20],c;
	scanf("%d\n",&n);
	for(int i = 0;i<n;i++)
	scanf("%d ",&a[i]);
	for(int i = 0;i<n;i++)
	{
		c = 0;
		if(a[i] == -1)
		continue;
		for(int j = i+1;j < n;j++)
		{
			if(a[i] == a[j])
			{
				c = 1;
				a[j] = -1;
			}
		}
		if(c == 0)
		printf("%d ",a[i]);
	}
	return 0;
}
