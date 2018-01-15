#include <stdio.h>

int main(void) {
	// your code goes here
	int n1,n2,n3;
	printf("Enter 1st number\n");
	scanf("%d",&n1);
	printf("Enter 2nd number\n");
	scanf("%d",&n2);
	printf("Enter 3rd number\n");
	scanf("%d",&n3);
	if(n1>n2)
	{
		if(n1>n3)
		printf("%d",n1);
		else
		printf("%d",n3);
	}
	else if(n2>n3)
	{
		printf("%d",n2);	
	}
	else
	printf("%d",n3);
	
	return 0;
}
