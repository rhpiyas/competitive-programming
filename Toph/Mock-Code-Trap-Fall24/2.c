#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);

    if(a==b)
        printf("It's a Tie!\n");
    if(a<b)
        printf("DeepSeek Wins!\n");
     if(a>b)
        printf("ChatGpt Wins!\n");


    return 0;
}
