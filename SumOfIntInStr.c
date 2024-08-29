#include<stdio.h>

int main() 
{
    char a[100];
    scanf("%[^\n]s",a);
    int sum=0;
    for(int i=0;a[i];i++)
    { 
        int k=(int)a[i];
        if(k>=48 && k<=57)
        {
            sum=sum+(k-48);
        }
    }
    printf("%d",sum);
}