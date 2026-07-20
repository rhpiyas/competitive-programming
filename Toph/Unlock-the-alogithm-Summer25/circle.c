#include<stdio.h>
int main()
{
    float s;
    scanf("%f",&s);

    if(s<=0)
    {
        printf("BAD LUCK\n");
    }
    else
    {
    float r = s/2;
    float circle = 3.1416*r*r;
    float square = s*s;

    float rem;
    rem = square-circle;

    printf("%.2f\n",rem);
    }





    return 0;
}