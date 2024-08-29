#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dc(int n) 
 { int count=0;
    while(n!=0) 
    {
        count++;n/=10;
     }
    return count;
  }
int power (int a,int b) 
 {
    int pow=1;
    for(int i=0;i<b;i++) 
        pow=pow*a;
    return pow;
    }
int automorphic (int a) 
 {
    int h=a*a;
    int c=dc(a);
    int p=power(10, c) ;
    int n=h%p;
    return n;
 }

int main() {

    int a;
    scanf("%d",&a) ;
   int ans=automorphic(a);
    if(ans==a) 
        printf ("Given number is Automorphic number") ;
    else
        printf ("Given number is not an Automorphic number") ;
    return 0;
}
