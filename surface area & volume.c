//Name: Elias Maina//
//REG NO:CT100/G/35062/26

#include <stdio.h>
int main() {

   double Radius; //%lf
   double Height; //%lf
   double pi = 3.142;
   float Volume; //%lf
   double SurfaceArea; //%lf

   printf("Enter the radius: \t");
   scanf("%lf", &Radius);

   printf("Enter the height: \t");
   scanf("%lf", &Height);

   SurfaceArea = (( pi* Radius * Radius) + ( pi * 2 * Radius * Height));
   Volume =  ( pi * Radius * Radius * Height);

   printf("Surface Area is %.3lf \n", SurfaceArea);
   printf("Volume is %.3lf \n", Volume);

   return 0;
}
