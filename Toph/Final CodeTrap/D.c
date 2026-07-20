#include<stdio.h>
int main()
{
    long long X,Y;
    scanf("%lld %lld",&X,&Y);
    int min=0;

    while(X<Y)
    {
        X = X*2;
        if(X<Y)
        {
             min++;
        }

    }

    printf("%d\n",min);

    return 0;
}
