#include<stdio.h>
int main()
{
    long long x;
    scanf("%lld",&x);
    long long xx,temp,A;
    xx = x%7;
    if(xx<0)
        xx = xx+7;
    temp = (2*xx*xx)+(11*xx);
    A = temp%7;
    printf("%lld\n",A);

    return 0;
}
