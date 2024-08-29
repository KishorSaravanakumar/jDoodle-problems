#include<stdio.h>
void isPrime(int n)
{ 
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag--;
            break;
        }
        
    }
    if(flag)
    printf("%d ",n);
    
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        isPrime(a[i]);
    }
}