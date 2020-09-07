#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
        char s[100];
        int count=1;
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==s[i+1])
                count++;
            else
        {
            printf("%c%d",s[i],count);
            count=1;
        }
    }
      printf("\n");
    
    return 0;
}
