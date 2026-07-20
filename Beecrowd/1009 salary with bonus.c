#include<stdio.h>
int main()
{
   char name [10];
   double salary,sale,bonus,total;

   scanf("%s",&name);
   scanf("%lf",&salary);
   scanf("%lf",&sale);

   bonus = 0.15*sale;
   total = salary+bonus;

   printf("TOTAL = R$ %.2lf\n",total);



    return 0;
}



