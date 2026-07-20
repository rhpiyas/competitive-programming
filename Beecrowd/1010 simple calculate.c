#include<stdio.h>
int main()
{
    //for product 1
    int code1,quantity1;
    double price1;

    //for product 2
    int code2,quantity2;
    double price2;

    double total;

    scanf("%d %d %lf",&code1,&quantity1,&price1);
    scanf("%d %d %lf",&code2,&quantity2,&price2);

    total = (quantity1*price1)+(quantity2*price2);

    printf("VALOR A PAGAR: R$ %.2lf\n",total);


    return 0;
}




