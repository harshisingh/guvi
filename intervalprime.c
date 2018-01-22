#include <stdio.h>

int main(void) {
	int l, h, i, count;
	scanf("%d %d", &l, &h);
            while(l<h)
            {
            	
                      count = 0;

                      for(i = 2; i <= l/2; ++i)
                      {
                      	
                         if(l % i == 0)
                          {
                            count = 1;
                            break;
                          }
                    }

        if (count == 0 && l!=1)
            printf("%d ", l);
            ++l;
            }
   

    return 0;
}
