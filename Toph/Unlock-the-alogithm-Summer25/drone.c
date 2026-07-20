#include<stdio.h>
int main()
{
    int N, H;
    scanf("%d %d",&N, &H);

    int d[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&d[i]);
    }

    for(int i=0; i<N-1; i++) {
        for(int j=0; j<N-i-1; j++) {
            if(d[j] > d[j+1]) {
                int temp = d[j];
                d[j] = d[j+1];
                d[j+1] = temp;
            }
        }
    }

    int power = 0;
    int count = 0;

    for(int i=0; i<N; i++)
    {
        if(d[i] <= H)
        {
            count++;
            H = H-d[i];
        }
        else
        {
            break;
        }
    }

    printf("%d\n",count);



    return 0;
}