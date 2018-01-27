#include<stdio.h>
int main()
{
int A,D,N,SUM;
printf("Enter the total number of terms:\n");
scanf("%d\t",&N);

printf("Enter the first number:\n");
scanf("%d\t",&A);

printf("Enter the difference:\n");
scanf("%d\t",&D);

SUM=N*((2*A+(N-1)*D))/2;
  printf("Sum is %d",SUM);
  
return 0;
}
