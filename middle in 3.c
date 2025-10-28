#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter any 3 no's\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b && a<c) || (a<b && a>c))
    {
        printf("%d is middle no.",a);
    }
    else if((b>a && b<c) || (b<a && b>c))
{
    printf("%d is middle no.",b);
}    
else 
{
    printf("%d is middle no.",c);
}
}