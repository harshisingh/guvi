#include <stdio.h>

int main(void) {
	int m1,m2,h1,h2,hr,min;
	scanf("%d %d\n%d %d",&h1,&m1,&h2,&m2);
	hr=abs(h1-h2);
	min=abs(m1-m2);
	printf("%d %d",hr,min);
	
	return 0;
}
