#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int j;
    for(j=1; j<=T; j++)
    {
        int n;
        scanf("%d",&n);

        int arr[n];
        int i;
        int sum=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            sum = sum+arr[i];
        }

        int max = arr[0];
        int min = arr[0];

        for(i=0; i<n; i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
            if(min>arr[i])
            {
                min = arr[i];
            }
        }

        int sum2=0;
        for(i=min; i<=max; i++)
        {
            sum2 = sum2+i;
        }
        if(sum==sum2)
        {
            printf("-1\n");
        }
        else
        {
            int miss;
            miss = sum2-sum;
            printf("%d\n",miss);
        }


    }

    return 0;
}
