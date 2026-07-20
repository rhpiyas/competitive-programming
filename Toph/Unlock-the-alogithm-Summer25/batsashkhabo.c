#include<stdio.h>
int main()
{
    int x, a, b;
    scanf("%d %d %d",&x, &a, &b);

    int pizza = x/a;
    if(pizza != 0)
    {
        printf("%d pizza khabo!\n",pizza);
    }

    int rem = x%a;
    int coke = rem/b;
    if(coke != 0)
    {
        printf("%d coke khabo!\n",coke);
    }

    if(pizza == 0 && coke == 0)
    {
        printf("batash khabo!\n");
    }

    return 0;
}