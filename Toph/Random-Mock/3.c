#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);



        int i;
        for(i=1; i<=T; i++)
        {
            long long A,X,B;
            scanf("%lld %lld %lld",&A,&X,&B);

            if(A==0 && X==0 && B==0)
                printf("FREE\n");

            else if((long long)A*B==X)
                printf("HyDroid\n");

            else
                printf("Sourabh\n");
        }



    return 0;
}


