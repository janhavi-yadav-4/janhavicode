//prg for calculate total and net salary
#include<stdio.h>
void main()
{
     printf("\t Janhavi \t Yadav\n");
    float bs,hra,ca,total,pf,netsalary;
    printf("enter basic salary\n");
    scanf("%f",&bs);
    if(bs>=35000)
    {
        hra=(bs*50)/100;
        ca=(bs*20)/100;
    }
    else if(bs>=20000 && bs<35000)
    {
        hra=(bs*30)/100;
        ca=(bs*12.5)/100;
    }
    else if(bs>=12500 && bs<20000)
    {
        hra=(bs*17.5)/100;
        ca=(bs*8.5)/100;
    }
    else if(bs>=5000 && bs<12500)
    {
        hra=(bs*7.50)/100;
        ca=(bs*0)/100;
    }
    else
    {
        printf("invalid range\n");
    }
     pf=(bs*7.8)/100;
     total=pf+hra+ca;
     netsalary=total-pf;

     printf("bs=%f\n",bs);
     printf("hra=%f\n",hra);
     printf("ca=%f\n",ca);
     printf("total=%f\n",total);
     printf("pf=%f\n",pf);
     printf("net salary=%f\n",netsalary);
}


     

     
