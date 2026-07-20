#include<stdio.h>
int main()
{
   int num,hour;
   double rate,SALARY;

   scanf("%d",&num);
   scanf("%d",&hour);
   scanf("%lf",&rate);

   SALARY = hour*rate;

   printf("NUMBER = %d\n",num);
   printf("SALARY = U$ %.2lf\n",SALARY);


    return 0;
}


