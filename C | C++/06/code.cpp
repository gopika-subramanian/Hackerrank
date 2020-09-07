#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int n;
      scanf("%d",&n);
      while(n-->0)
      { char s[100];
        scanf("%s",s);
        if(strlen(s)>10)
            printf("%c%ld%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
        else
            printf("%s\n",s);
          
      }
    return 0;
}
