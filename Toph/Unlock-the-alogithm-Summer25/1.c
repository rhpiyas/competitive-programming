#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b, c;
        scanf("%d %d %d",&a, &b, &c);

        if((a+b)>c)
        {
            printf("0\n");
        }
        else
        {
            int x = c - (a+b) + 1;

            printf("%d\n",x);
        }
    }




    return 0;
}