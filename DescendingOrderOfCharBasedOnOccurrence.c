#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int b[123];
    for(int i=0;i<123;i++)
    b[i]=0;
    for(int i=0;a[i];i++)
    {
        int k=(int)a[i];
        b[k]++;
    }
    int m=b[65];
    for(int i=65;i<123;i++)
    {
        if(m<b[i])
        m=b[i];
    }
    while(m!=0)
    {
        for(int i=122;i>=65;i--)
        {
            if(b[i]==m)
            {
            printf("%c - %d times\n",i,b[i]);
            }
        }
        m--;
    }
}