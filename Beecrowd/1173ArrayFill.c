#include<stdio.h>
int main()
{
    int V;
    scanf("%d",&V);
    int N[10];
    int sum = V;

    for(int i=0; i<10; i++)
    {
        N[i] = sum;
        sum = sum+N[i];
    }

    for(int i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }


    return 0;
}