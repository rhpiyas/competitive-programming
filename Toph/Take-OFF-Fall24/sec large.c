#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    int second = -1;

    for(i=0; i<n; i++)
    {
        if(arr[i]!=max)
        {
            if(second==-1 || second<arr[i])
            {
                second = arr[i];
            }
        }
    }

    if(second==-1)
        printf("-1\n");
    else
        printf("%d\n",second);



    return 0;
}
