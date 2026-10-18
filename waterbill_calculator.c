//Name: Elias Maina
//REG NO:CT102\G\35062\26

#include <stdio.h>

int main(){
    double unit;
    double bill;

    printf("Enter water unit consumed: \t");
    scanf("%lf", &unit);

    if(unit < 0 )
    {
        printf("Invalid  unit \n");
    }
    else if(unit <= 30)
    {
    bill = unit * 20;
    printf("Total water bill is ksh %.2lf \n", bill);
    }
    else if(unit <= 60)
    {
        bill = unit* 25;
        printf("Total water bill is ksh %.2lf \n", bill);

    }
    else {
        bill = unit * 30;
        printf("Total water bill is ksh %.2lf \n", bill);
    }

    return 0;
}
