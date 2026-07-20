#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    int i;
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    int max = A[0];
    for(i=0; i<N; i++)
    {
        if(max<A[i])
            max = A[i];
    }
    printf("%d\n",max);

    return 0;
}
