#include<stdio.h>
void main(){
    int n,c=0,f=0;
    scanf("%d\n",&n);
    char a[n];
    for(int i=0;i<n;scanf("%c\n",&a[i]),i++);
    for(int i=0;i<n;i++)
    {
       c=1;
       for(int j=i+1;j<n;j++)
         if(a[i]==a[j])
         c++;
         if(c%2==1)
           {
             printf("%c",a[i]);
             f=1;
             break;
           }
     }
     if(f==0)
     printf("All are even");
}