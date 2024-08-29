#include<stdio.h>
void rearrangeArray(int a[],int n)
{
    int f=1;
    for(int i=0;i<n;i+=2)
    {
        for(int j=i+1;j<n;j++)
         {
            if(a[i]%2!=0)
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
         }
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n%d",f);
}

int main() {
    int n;
    scanf("%d",&n);int f=0;int e,o=0;
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2!=0)
    {
        printf("%d",f);
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                e++;
            }
            if(a[i]%2==1)
            {
                o++;
            }
        }
        if(e==o)
        {
            rearrangeArray(a,n);
        }else
        {
            printf("%d",f);
        }
    }
}