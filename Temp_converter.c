//Name: Elias Maina
//REG: CT102\G\35062\26

#include <stdio.h>

double convertToCelcius(double Fahrenheit) {
return(Fahrenheit - 32) * (5.0 / 9.0);
}

int main(){
    double fahrenheitTemp;
    double celciusTemp;

    printf("Enter the temperature in fahrenheit: \t");
    scanf("%lf", &fahrenheitTemp);

    celciusTemp = convertToCelcius(fahrenheitTemp);

    printf("Temparature in celcius: %.2lf\n", celciusTemp);

    return 0;
}
