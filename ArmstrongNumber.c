#include<stdio.h>
int dc(int n)
{
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
int power(int a,int b)
{
    int pow=1;
    for(int i=1;i<=b;i++){
        pow=pow*a;
    }
    return pow;
}
int sumToPowerOfDigit(int m)
{
    int digit=dc(m);
    int sum=0;
    while(m!=0)
    {
        int y=m%10;
        int h=power(y,digit);
        sum=sum+h;
        m=m/10;
    }
    return sum;
}
int main()
{
    int g;
    scanf("%d",&g);
    int res=sumToPowerOfDigit(g);
    if(res==g)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}