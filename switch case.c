#include<stdio.h>
void main()
{
     printf("\t Janhavi \t Yadav\n");
    int x,y,k,ch;
    printf("enter any 2 number\n");
    scanf("%d%d",&x,&y);
    printf("press 1 for sum\n");
    printf("enter 2 for sub\n");
    printf("press 3 for multiply\n");
    printf("press 4 for mode\n");
    printf("enter your choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        k=x+y;
        printf("sum=%d\n",k);
        break;
        case 2:
        k=x-y;
        printf("sub=%d\n",k);
        break;
        case 3:
        k=x/y;
        printf("multiply=%d\n",k);
        break;
        case 4:
        k=x%y;
        printf("mode=%d\n",k);
        break;
        
    default:
             printf("Invalid choice\n");
    }

}
