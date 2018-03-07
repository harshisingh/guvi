#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20],b[20],t;
	int i,j,c;
            gets(a);
            gets(b);
            for (i = 0; i < strlen(a)-1; i++) {
            	
                        for (j = i+1; j < strlen(a); j++) {
                        	
                                    if (a[i] > a[j]) {
                                    	
                                               t = a[i];
                                               a[i] = a[j];
                                               a[j] = t;
                                     }
      }
   }
    for (i = 0; i < strlen(b)-1; i++) {
            	
                        for (j = i+1; j < strlen(b); j++) {
                        	
                                    if (b[i] > b[j]) {
                                    	
                                               t = b[i];
                                               b[i] = b[j];
                                               b[j] = t;
                                     }
      }
   }
   for(i=0;i<=strlen(a)-1;i++)
   {
   	if(a[i]!=b[i])
   	{
   		c=0;
   		break;
   	}
   	else
   	c=1;
 
   }
   if(c==0)
   printf("No");
   else
   printf("Yes");
	

	return 0;
}
