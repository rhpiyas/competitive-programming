#include<stdio.h>
int main()
{
    long long X;
    int N;
    scanf("%lld %d",&X,&N);

    double result;
    result = (2.0*(377-2*N))/3.0;
    printf("%.2lf Degree\n",result);

    return 0;
}
