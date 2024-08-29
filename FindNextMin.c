#include<stdio.h>
int max(int a[],int n)
{
    int m=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>m)
            m=a[i];
    return m;
}
int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m=max(a,n)+1;
    int b[m];
    for(int i=0;i<m;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
    b[a[i]]++;
    for(int i=0;i<n;i++)
    {
      int l=-1;
      for(int j=a[i]-1;j>=0;j--)
          if(b[j]!=0)
          {
              l=0;printf("%d>%d,",a[i],j);break;
          }
    if(l==-1)
        printf("%d>,",a[i]);
    }
    return 0;
    
}