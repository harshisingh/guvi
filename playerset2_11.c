#include <stdio.h>

int main(void) {
	int day;
	printf("enter 1 for monday. 2 for tuesday. 3 for wednesday. and likewise\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("yes");
		       break;
		case 2:printf("yes");
		       break;
		case 3:printf("yes");
		       break;
		case 4:printf("yes");
		       break;
		case 5:printf("yes");
		       break;
		case 6:printf("no");
		       break;
		case 7:printf("no");
		       break;
	}
	return 0;
}
