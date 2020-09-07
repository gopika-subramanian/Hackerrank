#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        int n;
        scanf("%d",&n);        
        if(n>5)
            printf("Greater than 5\n");
        else if(n<5)
            printf("Less than 5\n");
        else
            printf("Equal to 5\n");
    }

    return 0;
}
