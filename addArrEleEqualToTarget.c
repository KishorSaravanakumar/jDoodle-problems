/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/
#include<stdio.h>

int main() {
    int a[4]={1,2,3,4};
    int target=7;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]+a[j] == target)
            printf("[%d,%d]",i,j);
        }
    }
}
// print the indexes which addition are equal to target