#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    long long A[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&A[i]);
    }

    int min = 0;
    int result;

    for(i=0; i<n; i++)
    {
        result = A[i]+i;
        if(result>min)
            min = result;

    }

    printf("%d\n",min);

    return 0;
}
