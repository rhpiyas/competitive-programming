#include<stdio.h>
int main()
{
    int W,M;
    scanf("%d %d",&W,&M);

    if(W>100 && M>=500)
        printf("Fruits\n");
    else if(W>100 && M<500)
        printf("Salad\n");
    else if(W<=100 && M>=500)
        printf("Biriyani\n");
    else if(W<=100 && M<500)
        printf("Khichuri\n");

    return 0;
}
