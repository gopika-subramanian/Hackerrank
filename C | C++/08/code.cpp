
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        int len = n + 1; 
  
         for (int i=0; i<n; i++) 
        { 
            int sum = a[i]; 
          if (sum > x) 
          { len=1;
            break;
          }  
  
          for (int j=i+1; j<n; j++) 
          { 
              sum += a[j]; 
              if (sum > x && (j - i + 1) < len) 
                 len = (j - i + 1); 
         }
         }
        printf("%d\n",len);
    }
    return 0;
}

