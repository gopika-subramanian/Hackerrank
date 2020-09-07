
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t-->0){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c];
        
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
                 b[i][j]=0;
    }   
        
    
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1){
                for(int k=0;k<c;k++)
                    b[i][k]=1;
                for(int k=0;k<r;k++)
                    b[k][j]=1;
            }
        }
    }
        
        
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",b[i][j]);
         printf("\n");
    }
    
    }    
    return 0;
}

