#include<stdio.h>
int findPeakEle(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if((a[i]>a[i-1]) && (a[i]>a[i+1]))
        {
            printf("%d ",a[i]);
        }
    }
}
int find(int a[],int n)
{
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(!(a[i]<a[i+1]))
        {
            flag--;
            break;
        }
    }
    if(flag)
    printf("array in ascending order\nso the peak element is %d",a[n-1]);
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(!(a[i]>a[i+1]))
            {
                flag++;
                break;
            }
        }
        if(flag)
        {
            for(int i=0;i<n-1;i++)
            {
                if(!(a[i]==a[i+1]))
                {
                    flag--;
                    break;
                }
            }
            if(flag)
            {
                printf("the elements of array are same \n So the peak element is %d ",a[n-1]);
            }
            else
            {
                findPeakEle(a,n);
            }
            
        }
        else
        printf("array in descending order\nso the peak element is %d",a[n-n]);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    find(a,n); 
}