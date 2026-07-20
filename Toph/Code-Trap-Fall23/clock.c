#include <stdio.h>

int main()
{
    int H,M;
    scanf("%d %d",&H,&M);
    double hour,min;
    hour = (H*30)+(M*0.5);
    min = M*6;
    double angle;
    angle = fabs(hour-min);
    if (angle>180)
        angle = 360-angle;
    printf("%.7lf\n",angle);

    return 0;
}
