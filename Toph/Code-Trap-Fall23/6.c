#include<stdio.h>
int main()
{
    long long I,r;
    scanf("%lld %lld",&I,&r);

    int i,j,count=0;

    for(i=I; i<=r; i++)
    {
        int sum = 0;
        for(j=2; j<i; j++)
        {
            if(i%j!=0)
            {
                while(i!=0)
                {
                    sum = sum*10 + (i%10);
                    i = i/10;
                }
                if(i==sum)
                {
                    count++;
                }
            }
        }
    }

    printf("%d\n",count);

    return 0;
}
