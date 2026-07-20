#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);

    int price[n];
    int flavour[n];
    int i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&price[i]);
    }

    for(i=0; i<n; i++)
    {
        scanf("%d",&flavour[i]);
    }

    int result=100001;

    for(i=0; i<n; i++)
    {
        if(flavour[i]>=t && price[i]<result)
        {
            result = price[i];
        }
    }

    if(result==1000)
        printf("Bad Luck!\n");
    else
        printf("%d\n",result);

    return 0;
}
