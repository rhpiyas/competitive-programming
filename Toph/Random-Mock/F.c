#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    int i;
    int count=0;
    for(i=3; i<=N; i++)
    {
        if(N%i==0)
        {
            printf("%d-AmoriteBrother\n",i);
            count++;
        }
    }

    if(count==0)
        printf("%d-AmoriteBrother\n",N);

    return 0;
}


