#include<stdio.h>
int main()
{
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if(x2 == x1 && y2 == y1)
    {
        printf("Equal\n");
    }
    else if(x2>=x1 && y2<=y1)
    {
        printf("Inside\n");
    }
    else
    {
        printf("Nothing\n");
    }
    



    return 0;
}