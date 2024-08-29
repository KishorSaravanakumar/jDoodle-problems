#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int strongNumber(int n)
{
    int sum=0;
    while(n!=0)
    {
        int x=n%10;
        sum=sum+factorial(x);
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=strongNumber(n);
    if(n==result)
        printf("Given number is a strong number");
    else
        printf("Given number is not a strong number");

    return 0;
}