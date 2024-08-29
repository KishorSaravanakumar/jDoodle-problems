#include<stdio.h>
void LofSubString(char x[])
{
    int l,m=0,start,end;
    for(int i=0;x[i];i++)
    {
        int b[58]={0};
        l=0;
       for(int j=i;x[j];j++)
       {
           int k=(int)x[j];
           if(b[k-65]==0)
           {
              b[k-65]++;l++;
           }
           else
           {
               if(l>m)
               {
                   m=l;
                   start=i;
                   end=j-1;
                   break;
               }
           }
           
       }
      
    } printf("%d\n",m);
    for(int i=start;i<=end;i++)
    printf("%c",x[i]);
   
}
int main()
{
    char x[100];
    scanf("%s",x);
    LofSubString(x);
    return 0;
}