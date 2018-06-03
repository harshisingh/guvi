#include <stdio.h>
#include <math.h>

int main(void) {
	int p = 0,l,k,c[8],t[8];
	scanf("%d",&l);
	k = 0;
	for(int i = 2;i <= l;i++)
	{
		if((l%i) == 0)
		{
			l = l/i;
			c[k] = i;
			k++;
		}
	}
	p = 0;
	for(int i = 0;i < k;i++)
	{
		for(int j = 2;j < sqrt(c[i]);j++)
		{
		if((c[i])% j == 0)
		{
		j = 90;
		p++;
		}
		}
		if(p < 1)
		t[i] = c[i];
	}
	int i = 0;
	while( i < k)
	{
		if(t[i] == t[i+1])
		{
		printf("%d ",t[i]);
		i = i + 2;
		}
		else
                        {
		printf("%d ",t[i]);
		i++;
                        }
	}
	return 0;
}
