#include<stdio.h>
#include<math.h>
struct cart
{
int x;
int y;
}p[2];

int main()
{
float dis;

printf("For first point:");
scanf("%d %d",&p[0].x,&p[0].y);

printf("For second point:");
scanf("%d %d",&p[1].x,&p[1].y);

dis=sqrt(pow((p[1].x-p[0].x),2)+pow((p[1].y-p[0].y),2));
printf("dis=%f",dis);

}
