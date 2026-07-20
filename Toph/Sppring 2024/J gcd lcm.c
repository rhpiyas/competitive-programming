#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    int i;

    for(i=1; i<=T; i++)
    {
        int a, b, x, y, gcd, lcm;
        scanf("%d %d", &a, &b);
        x = a;
        y = b;

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
        lcm = (x * y) / gcd;

        if(lcm<=a || lcm<=b)
            printf("%d %d\n",gcd,lcm);
        else
            printf("-1");

    }

    return 0;
}

