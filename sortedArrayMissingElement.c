// sorted array missing element
 
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=(i+m))
        {printf("%d ",i+m);
        break;}
    }
}
