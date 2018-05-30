#include <stdio.h>

int main(void) {
	int day;
	printf("enter 1 for monday. 2 for tuesday. 3 for wednesday. and likewise\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("no");
		       break;
		case 2:printf("no");
		       break;
		case 3:printf("no");
		       break;
		case 4:printf("no");
		       break;
		case 5:printf("no");
		       break;
		case 6:printf("yes");
		       break;
		case 7:printf("yes");
		       break;
	}
	return 0;
}
