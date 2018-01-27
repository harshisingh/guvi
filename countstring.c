#include <stdio.h>

int main(void) {
	char c[20];
	int i,count=0;
	scanf("%[^\n]s", c);
            for (i = 0;c[i] != '\0';i++)
	
	{
		if(c[i] == ' ')
		{
		count++;
		}
	
	}
	printf("%d",count+1);
	return 0;
}
