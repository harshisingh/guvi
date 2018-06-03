#include <stdio.h>
#include <math.h>
int main(void) {
	int a,b,l,r,j,k,t,y;
	int c[8] = {1,1,1,1,1,1,1,1}, d[8] = {1,1,1,1,1,1,1,1};
	scanf("%d %d",&l,&r);
	a = sqrt(l);
	b = sqrt(r);
	k = 0;
	for(int i = 2;i <= l;i++)
	{
		while((l%i) == 0)
		{
			l = l/i;
			c[k] = i;
			k++;
		}
	}
	j = 0;
	for(int i = 2;i <= r;i++)
	{
		while((r%i) == 0)
		{
			r = r/i;
			d[j] = i;
			j++;
		}
	}
	if(k > j)
	y = k;
	else
	y = j;
            t = l * r;
	for(int i = 0;i <= y;i++)
	{
		if(d[i] == c[i])
		t = t * c[i];
		else
		t = t * d[i] * c[i];
	}
	printf("%d",t);
	return 0;
}

