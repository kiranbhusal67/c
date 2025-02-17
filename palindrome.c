#include<stdio.h>
#include<string.h>
int ispali(char str[],int s,int l)
{

if(s>=l)
{
return 1;
}
if(str[s]!=str[l])
{
return 0;

}
return ispali(str,s+1,l-1);
}

 
int main()
{
    if (ispali("WoW",0,strlen("WoW")-1))
    {
        printf("the string is palindrome");
    }
    else
    {
        printf("not palindrome");
    }

}

