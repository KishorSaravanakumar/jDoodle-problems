#include<stdio.h>
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
int MaxndMin(int a[],int n)
{
    int y=max(a,n)+1;
    int b[y];
    for(int i=0;i<y;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
    {
     b[a[i]]++;
    }
   int i=0,j=y-1;
   while(i<=j)
   {
       if(b[i]!=0 && b[j]!=0)
       {
           if(i==j)
            {
                printf("%d",i);
                break;
                
            }
            else
            {
                printf("%d %d ",j,i);
                i++;j--;
            }
       }
       else if(b[i]==0)
       i++;
       else
       j--;
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    MaxndMin(a,n);printf("\n");
    for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);  
    }
}