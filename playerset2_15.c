#include <stdio.h>
#include <string.h>

int main(void) {
	int c[255] = {0};
	int max, index,i;
	char s[15];
            gets(s);
            for(i = 0; s[i] != 0; i++)
            {
             ++c[s[i]];
            }
            max = c[0];
           index = 0;
for(i = 0;s[i] != 0; i++)
{
     if( c[s[i]] > max)
     {
         max = c[s[i]];
         index = i;
     }
}
printf("%c ", s[index]);
	return 0;
}
