#include<stdio.h>
int main()
{
    double M,X;
    scanf("%lf %lf",&M,&X);
    double Z;
    Z = M/(1+X/100);
    printf("%.8lf\n",Z);


    return 0;
}
