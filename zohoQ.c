/*take a odd length string and print the letter from middle and add each letter with new line.

sample input : kishore
sample output:
horekis
| | | | | | | | | | | | | | |h|
| | | | | | | | | | | | |h|o|
| | | | | | | | | | |h|o|r|
| | | | | | | |h|o|r|e|
| | | | | |h|o|r|e|k|
| | | |h|o|r|e|k|i|
|h|o|r|e|k|i|s|
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    scanf("%s",x);
    int a=strlen(x);
    char y[a];
    for(int i=a/2;x[i];i++)
    y[i-a/2]=x[i];
    for(int i=0;i<a/2;i++)
    y[i+(a/2+1)]=x[i];
    for(int i=0;y[i];i++)
    printf("%c",y[i]);
    printf("\n");
    int j=0;int k=a*2;
    while(j<a)
    {
        printf("|");
        for(int i=0;i<k;i++)
        printf(" |");
        if((j+1)%3==0)
        k=k-3;
        else
        k=k-2;
        for(int i=0;i<=j;i++)
        printf("%c|",y[i]);
        printf("\n");
        j++;
    }
    
    
}

