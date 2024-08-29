/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/
#include<stdio.h>
int len(char x[])
{
    int c=0;
    for(int i=0;x[i];i++)
    c++;
    return c;
}
void reverseWithoutSplChar(char x[])
{
    int i=0;
    int j=len(x)-1;
    while(i<j)
    {
        int m=(int)x[i];
        int n=(int)x[j];
        if(((m>=65 && m<=90) || (m>=97 && m<=122)) && ((n>=65 && n<=90) ||(n>=97 && n<=122)))
        {
            char temp=x[i];
            x[i]=x[j];
            x[j]=temp;
            i++;j--;
        }
        else if(!((m>=65 && m<=90) || (m>=97 && m<=122)))
        i++;
        else
        j--;
    }
}
int main()
{
    char x[100];
    scanf("%[^\n]",x);
    reverseWithoutSplChar(x);
    printf("%s",x);
    
}