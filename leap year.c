#include <stdio.h>

int main(void) {
	int year;
	printf("Enter year to check if it is leap or not\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			printf("Yes\n");
			else
			printf("No\n");
		}
		else
		printf("Yes\n");
	}
	else
	printf("No\n");
	
	return 0;
}
