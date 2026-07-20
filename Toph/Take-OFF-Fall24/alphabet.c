#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d",&n);

    char name[n];
    int i;
    for(i=0; i<=n; i++)
    {
        scanf("%c",&name[i]);
    }

    int sum=0;
    for(i=0; i<=n; i++)
    {
        if(name[i]>=48 && name[i]<=57)
        {
            sum = sum+name[i];
        }
    }

    if(sum%3==0)
        printf("YES");
    else
        printf("NO");



    return 0;
}
