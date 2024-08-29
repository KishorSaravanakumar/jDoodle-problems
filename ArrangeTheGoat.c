#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int m;scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    int c[m+n];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[i+n]=b[i];
    }
    for(int i=0;i<m+n;i++)
    {
        for(int j=i+1;j<n+m;j++)
        {
            if(c[i]>c[j])
            {
                int t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    for(int i=0;i<m+n;i++)
        printf("%d ",c[i]);   
    return 0;
}