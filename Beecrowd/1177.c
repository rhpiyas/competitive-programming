#include<stdio.h>
int main()
{  
    int N[1000];
    int T;
    scanf("%d",&T);

    int count = 0;
    for(int i=0; i<1000; i++)
    {
        N[i] = count;
        if(count < T-1)
        {
            count = count+1;
        }
        else
        {
            count = 0;
        }
    }

    for(int i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i, N[i]);
    }
    
    return 0;
}