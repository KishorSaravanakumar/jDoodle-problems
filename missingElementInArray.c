#include<stdio.h>
int min(int a[],int n)
{
    int m=a[0];
    for(int i=1;i<n;i++)
    {
        if(m>a[i])
        m=a[i];
    }
    return m;
}
int max(int a[],int n)
{
    int m=a[0];
    for(int i=1;i<n;i++)
    {
        if(m<a[i])
        m=a[i];
    }
    return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int y=max(a,n)+1;
    int x=min(a,n);
    int b[y];
    for(int i=0;i<y;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int k=a[i];
        b[k]++;
    }printf("the missing numbers are ");
    for(int i=x;i<y;i++)
    {
        if(b[i]==0)
        printf("%d ",i);
    }
    return 0;
}