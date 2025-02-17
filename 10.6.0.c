#include<stdio.h>
int n=5;
struct std{
char name [40];
int roll;
float marks;
}e[5];
int main()
{
int i;
for(i=0;i<n;i++)
{
printf("\nRecords of %d student:\n",i+1);
printf("\nEnter name:");
scanf("%s",e[i].name);
printf("\nEnter roll number:");
scanf("%d",&e[i].roll);
printf("\nEnter marks:");
scanf("%f",&e[i].marks);
}
printf("\nName\tRoll_no\tMarks\n");
for(i=0;i<n;i++)
{
if(e[i].marks>50)
{
printf("%s\t%d\t%f\n",e[i].name,e[i].roll,e[i].marks);
}
else{
continue;
}
}
return 0;
}
