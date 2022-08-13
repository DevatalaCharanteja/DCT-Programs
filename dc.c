#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    int i,j;
    scanf("%d", &n);
    int size = (2*n) - 1;
    int a[size][size];
    int s=0;
    int e=size-1;
    while(n>0)
    {
        for(i=s;i<=e;i++)
        {
            for(j=s;j<=e;j++)
            {
                if(i==s||j==s||i==e||j==e)
                a[i][j]=n;
            }
        }
        s++;
        e--;
        n--;
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
