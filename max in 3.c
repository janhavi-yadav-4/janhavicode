#include<stdio.h>
void main()
{
     printf("\t Janhavi \t Yadav\n");
    int c,a,b;
    printf("enter any 3 no.\n");
    scanf("%d%d%d",&a,&b,&c);   
    if(a>b)
    {
        if(a>c)
        printf("%d is max",a);
        else
        printf("%d is max",c);
    }
    else
    {
        if (b>c)
        printf("%d is max",b);
        else
        printf("%d is max",c);
    }
   

}            
