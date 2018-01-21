#include <stdio.h>

int main(void) {
	
           int n, i, count = 0;
           scanf("%d",&n);

          for(i=2; i<=n/2; ++i)
          {
          	
        // condition for nonprime number
            if(n%i==0)
            {
              count=1;
              break;
            }
          }

    if (count==0)
        printf("Yes");
    else
        printf("No");
    

	return 0;
}
