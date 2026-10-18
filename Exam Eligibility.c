//Name:Elias Maina
//REG NO:CT102\G\35062\26

#include <stdio.h>

int main(){

    double Attendance;
    double Marks;

    printf("Enter the attendance(%%): \t");
    scanf("%lf", &Attendance);

    printf("Enter the marks: \t");
    scanf("%lf", &Marks);

    if(Attendance >= 75 && Marks >= 40)
        {
        printf("Eligible \n");
    }
    else {
        printf("Not eligible \n");
    }

     return 0;
}
