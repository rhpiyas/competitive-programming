#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);

    if(X==0)
        printf("Panta Pasha\n");
    else if(X>=200)
        printf("Biryani Burhan\n");
    else if(X<200)
        printf("Fuchka Feroze\n");

    return 0;
}
