#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d",&X, &Y);

    int count = 0;
    int price = 0;
    int unit = 0;

    while(X > price)
    {
        unit = unit + Y;

        if(unit <= 50)
        {
            price = price + Y*10;
        }
        else if(unit <= 80)
        {
            price = price + Y*15;
        }
        else if(unit <= 100)
        {
            price = price + Y*20;
        }
        else
        {
            price = price + Y*25;
        }

        count++;
    }

    printf("%d\n",count);



    return 0;
}