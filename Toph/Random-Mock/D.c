#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        int even=0;
        int odd=0;

        for(i=0; i<n; i++)
        {
            if(i%2 != a[i]%2)
            {
                if(i%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }

        if(even==odd)
            printf("%d\n",even);
        else
            printf("-1\n");

        }


    return 0;
}


