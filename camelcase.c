#include <stdio.h>
#include <string.h>

int main(void) {
	char s[25];
	gets(s);
	s[0]= toupper(s[0]);
	for (int i = 0; i <strlen(s); i++) {
 
        if (s[i] == ' ') {
        	
            s[i + 1] = toupper(s[i + 1]);
            
        }
	}
	printf("%s",s);
	return 0;
}
