#include<stdio.h>

int main() 
{
    char a[100];
    scanf("%[^\n]s",a);
    int i,zero=0;
    for(i=0;a[i];i++)
    {
        if(a[i]=='0')
         zero++;
    }
    int n=i;
    if(n==zero)
    printf("0");
    else
    {
        for(int j=0;a[j];j++)
        {
            if(a[j]!='0')
            printf("%c",a[j]);
        }
    }
}