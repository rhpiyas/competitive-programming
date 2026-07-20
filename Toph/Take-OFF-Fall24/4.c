#include<stdio.h>
int main()
{
    int N,X,M,Y;
    scanf("%d %d %d %d",&N,&X,&M,&Y);
    int burger;
    int max=0;

    int pack;
    pack = N/Y;
    int i;

    for(i=0; i<=pack; i++)
    {
        int left;
        left = N - (i*Y);
        burger = (i*M)+(left/X);

        if(burger>max)
            max = burger;
    }
    printf("%d\n",max);

    return 0;
}
