#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t-->0)
    {   char s[100];
        scanf("%s",s);
        if(isupper(s[0]))
        {  
        for(int i=1;i<strlen(s);i++)
        {  if(islower(s[i]))
            s[i] = s[i] -32;
        }
         printf("%s\n",s);
        }
        else 
        {   
         for(int i=1;i<strlen(s);i++)
         {  if(isupper(s[i]))
             s[i] = s[i] +32;
         } 
            printf("%s\n",s);
        }
    return 0;
}
}

