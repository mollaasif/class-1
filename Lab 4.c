#include<stdio.h>
int main()
{
    float fah,centi;

    printf("Enter temeprature of city fah : ");

    scanf("%f",&fah);

    centi=(5.0/9.0)*(fah-32);

    printf(" Temperature : %f ",centi);

    return 0;

}
