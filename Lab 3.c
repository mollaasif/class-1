#include<stdio.h>
int main()
{
double sub_1,sub_2,sub_3,sub_4,sub_5,aggregate;
float percentage;
printf("Enter the number of sub 1: ");
scanf("%lf",& sub_1);

printf("Enter the number of sub 2: ");
scanf("%lf",& sub_2);

printf("Enter the number of sub 3: ");
scanf("%lf",& sub_3);

printf("Enter the number of sub 4: ");
scanf("%lf",& sub_4);

printf("Enter the number of sub 5: ");
scanf("%lf",& sub_5);

aggregate=sub_1+sub_2+sub_3+sub_4+sub_5;

percentage=aggregate*(100/500);

printf(" Aggregate mark obtained by student=%lf\n",aggregate);

printf(" Percentage of students =%.2f",percentage);

return 0;
}
