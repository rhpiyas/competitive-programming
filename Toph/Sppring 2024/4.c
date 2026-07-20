#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int A,B;
    scanf("%d %d",&A,&B);
    if(A>B)
        printf("Alex\n");
    else if(A==B)
        printf("Draw\n");
    else
        printf("Ben\n");



    return 0;
}
