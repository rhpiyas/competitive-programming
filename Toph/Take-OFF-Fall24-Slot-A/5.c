#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);

    int arr[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(i=0; i<N; i++)
    {
        if(max<arr[i])
            max = arr[i];
        if(min>arr[i])
            min = arr[i];
    }

    int result;
    result = max - min;
    printf("%d\n",result);

    return 0;
}
