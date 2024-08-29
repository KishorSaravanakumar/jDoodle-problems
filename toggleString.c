#include <stdio.h>

int main()
{
	char x[100];
	scanf("%s",x);
	for(int i=0;x[i];i++)
	{
		int y=(int)x[i];
		if(y>=65 && y<=90)
		{
			y=y+32;
			printf("%c",y);
		}
		else if(y>=97 && y<=122)
		{
			y=y-32;
			printf("%c",y);
		}
	}
}
