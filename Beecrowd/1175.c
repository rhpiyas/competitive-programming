#include<stdio.h>
int main()
{
    int N[20];
    int size = 20;
    for(int i=0; i<size; i++)
    {
        scanf("%d",&N[i]);
    }
    for(int i=0; i<(size/2); i++)
    {
        int temp = N[i];
        N[i] = N[size-1-i];
        N[size-1-i] = temp;
    }

    for(int i=0; i<size; i++)
    {
        printf("N[%d] = %d\n",i, N[i]);
    }

    return 0;
}