#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    int t;
     scanf("%d",&t);
     while(t-->0){
         int n,so_far=INT_MIN,end_here=0;
        scanf("%d",&n);
        int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        end_here=end_here+a[i];
        if(so_far<end_here)
            so_far=end_here;
        if(end_here<0)
            end_here=0;
    }
        printf("%d\n",so_far);
    }
    return 0;
}

