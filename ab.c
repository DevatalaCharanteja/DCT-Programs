// D.CHARAN TEJA     [MCSAIR   rollno:37  ADCKKD]
#include <stdio.h>

int main() 
{
   int i,j,n;
   char ch='A';
   char ch1='a';
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf("%c%c ",ch,ch1);
           ch++;
           ch1++;
       }
       printf("\n");
   }
    
    return 0;
}
