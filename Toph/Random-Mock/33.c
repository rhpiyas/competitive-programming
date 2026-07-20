#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    while (T--)
    {
        long long A,X,B;
        scanf("%lld %lld %lld", &A, &X, &B);
        if (X == 0)
        {
            printf("FREE\n");
        }
        else if (A * B == X)
        {
            printf("HyDroid\n");
        }
        else
        {
            printf("Sourabh\n");
        }
    }
    return 0;
}
