#include <stdio.h>

int main(void) {
	int i,l,u;
	scanf("%d %d",&l,&u);
	for(i=l+1;i<u;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
	return 0;
}
