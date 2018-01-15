#include <stdio.h>

int main(void) {
	// your code goes here
	int N,i,s=0;
	printf("Enter the value of N\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	s=s+i;
	printf("%d",s);
	
	return 0;
}
