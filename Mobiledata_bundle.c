//Name: Elias Maina
//REGNO:CT102\G\35062\26

#include <stdio.h>

int main()
{ int choices;

  printf("Select data bundles \n");
  printf("1. 100mb @ 50 kes \n");
  printf("2. 500mb @ 200 kes \n");
  printf("3. 1GB @ 350 kes \n");
  printf("4. 2GB @ 600 kes \n");

   printf("Enter your choice: \t");
   scanf("%d", &choices);

   switch(choices){
   case 1:
       printf("You selected 100mb. Cost = 50 kes \n");
       break;

       case 2:
           printf("you selected 500mb. Cost = 200 kes \n");
       break;

       case 3:
         printf("You selected 1GB. Cost = 350 kes /n");
         break;

       case 4:
        printf("you selected 2GB. Cost =  600 kes \n");
        break;

       default:
        printf("Invalid choice \n");
        }

    return 0;
}

