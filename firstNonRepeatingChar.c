// first non repeated character
#include<stdio.h>
int firstNonRepeatingChar(char x[])
{
    int b[123];
    for(int i=0;i<123;i++)
    b[i]=0;
    for(int i=0;x[i];i++)
    {
        int y=(int)x[i];
        b[y]++;
    }
    for(int i=0;x[i];i++)
    {
        int y=(int)x[i];
        if(b[y]==1 && ((y>=65 && y<=90) || (y>=97 && y<=122)))
        {
           return y; 
        }
        
    }
    
}
int main()
{
    char x[100];
    scanf("%[^\n]",x);
    char a=firstNonRepeatingChar(x);
    printf("%c",a);
    
}