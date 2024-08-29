#include<stdio.h>
struct dateDetail
{
    int D,M,Y;
};
struct dateDetail read(struct dateDetail d)
{
    scanf("%d%d%d",&d.D,&d.M,&d.Y);
    return d;
}
void display(struct dateDetail d)
{
    printf("%d.%d.%d",d.D,d.M,d.Y);
}
int main() 
{
    struct dateDetail d;
    d=read(d);
    display(d);
    return 0;
    
}