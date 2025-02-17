#include<stdio.h>
#include<math.h>
int main()
{
int x,n,i,y=0;


printf("Enter x and n: ");
scanf("%d %d",&x,&n);
for(i=1;i<=n;i++)
{
    y+=pow(x,i);
}
{

printf("y=%d",y);
}
return 0;
}
