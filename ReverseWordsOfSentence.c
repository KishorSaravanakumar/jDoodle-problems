#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int charCount(char x[])
{
    int c=0;
    for(int i=0;x[i];i++)
        c++;
    return c;
}
void reverseWordsOfSentence(char x[])
{
    int len=charCount(x);
    int count=0;
    for(int i=len-1;i>=0;i--)
    {
        if(x[i]!=' ')
            count++;
        else
        {
            for(int j=i+1;j<=i+count;j++)
                printf("%c",x[j]);
            printf(" ");
            count=0;
        }
    }
    for(int i=0;i<=len-1;i++)
    {
        if(x[i]!=' ')
            printf("%c",x[i]);
        else
            break;
        
    }
}
int main() 
{ 
    char x[100];
    scanf("%[^\n]s",x);
    reverseWordsOfSentence(x);
    
    return 0;
}