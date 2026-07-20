#include<stdio.h>
int main()
{
    int X, S, N;
    scanf("%d %d %d", &S, &X, &N);

    int count = 0;
    int power = 0;

    while(S > power)
    {
        power = power + N;
        count++;
    }
    
    if(count <= X)
    {
        printf("%d\n", count);
    }
    else
    {
        printf("Rip you Po!\n");
    }



    return 0;
}