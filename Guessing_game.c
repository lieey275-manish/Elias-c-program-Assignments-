#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int secret_no;
    int guessing;
    int attempts = 0;

    srand(time(0));
    secret_no = rand () % 20 + 1;

    while (1){
        printf("Guess a number (1-20): \t");
        scanf("%d", &guessing);

        attempts++;

        if (guessing > secret_no){
            printf("too high! \n");
        }

            else if(guessing < secret_no){
                    printf("Too low! \n");
        }
                else{
                    printf("Congratulation! \n");
                    printf("Number of attempts: %d \n", attempts);
                    break;
                }
    }

    return 0;
}
