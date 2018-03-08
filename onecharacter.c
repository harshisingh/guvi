#include <stdio.h>
#include <string.h>

int main(void) {
	char a[14],b[14];
	scanf("%s %s",a,b);
	int m=strlen(a);
	int n=strlen(b);
	if(m!=n)
	{
		return 0;
	}
	int c=0;
	int i=0,j=0;
	while(i < m && j < n)
	{
		if(a[i]!=b[j])
		{
			c++;
                                    
		}
		i++;
		j++;
	}
	if(c == 1)
	printf("Yes");
	else
	printf("No");
	
	
	return 0;
}
