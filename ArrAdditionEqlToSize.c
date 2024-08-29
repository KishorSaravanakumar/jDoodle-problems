#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    a[0]=n;
    int j=1;
    if(n%2!=0)
    {
        for(int i=1;i<n;i=i+2)
        {
            a[i]=-j;
            a[i+1]=j;
            j++;
        }
    }
    else if(n%2==0)
    {
        a[1]=0;
        for(int i=2;i<n;i=i+2)
        {
            a[i]=-j;
            a[i+1]=j;
            j++;
        }
    }
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
}