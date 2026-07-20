#include<stdio.h>
int main()
{
    long long x;
    scanf("%lld",&x);

    long long A,S;
    S = (2*x*x)+(11*x);
    A = S%7;

    if(A<0)
        A = A+7;

    printf("%lld\n",A);

    return 0;
}
