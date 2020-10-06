#include<stdio.h>
int main()
{
    int n; int count=0;
    scanf("%d",&n); int high=0;
    int i=0,x[100];
    for(i=4;i>0;i--)
    {
      x[i]=n%2;
      n=n/2;
      if(x[i]==1)
       {
         count++;
         if(high<count)
             high=count;
       }
      else
        count=0;
    }
    printf("%d",high);
}
