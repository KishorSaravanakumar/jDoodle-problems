Print the nth term of the series,S(n)

Sample Input 0

5
1 2 3
Sample Output 0

11

\#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int recurse(int n,int a,int b,int c)
{
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else if(n==3)
    return c;
    else
    return recurse(n-1,a,b,c)+recurse(n-2,a,b,c)+recurse(n-3,a,b,c);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ans=recurse(n,a,b,c);
    printf("%d",ans);
    
}
