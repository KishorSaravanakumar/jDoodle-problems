#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        int x=n%10;
        rev=(rev*10)+x;
        n=n/10;
    }
    printf("The Binary value is : %d",rev);
}
int decimalToBinary(int n)
{
    int sum=0;
    while(n!=0)
    {
    int y=n%2;
    sum=(sum*10)+y;
    n=n/2;
    }
    reverse(sum);
    return 0;
}
int main() 
{
    int n;
    scanf("Input any decimal number : %d",&n);
    decimalToBinary(n);
    return 0;
}
