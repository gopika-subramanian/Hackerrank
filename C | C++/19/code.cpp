#include <stdio.h>
#define MAX_SIZE 10000

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

    
    scanf("%d", &n);

  
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("%d", sum);

    return 0;
}
