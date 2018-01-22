#include <stdio.h>

int main(void) {
	int l,u,b,i,cube,j;
	scanf("%d %d ",&l,&u);
	for(i=l;i<=u;i++)
	{
		j=i;
		cube=0;
		while(j>0)
		{
			b=(j%10);
			cube+=b*b*b;
			j=j/10;
		}
		if(i==cube)
		printf("%d ",i);
	}
	
	return 0;
}
