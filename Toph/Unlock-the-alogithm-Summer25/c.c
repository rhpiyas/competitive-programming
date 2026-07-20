#include<stdio.h>
int main()
{
    int K, X;
    scanf("%d %d",&K, &X);

    int count = 0;
    int price = 0;

    while(price < K)
    {
        price = price + X;
        
        if(price <= K)
        {
            count++;
        }
    }
    
    int a = K%X;

    int result = count + a;
    printf("%d\n", result);



    return 0;
}