#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t); 
    while(t-->0)
    {
        int n,rev=0,rem;
        scanf("%d",&n);
        while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
        }
        printf("%d\n",rev);
    }
    return 0;
}

