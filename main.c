#include <stdio.h>
#include <stdlib.h>


int main()
{

    /*int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0;
    while(guess != secretNumber && outOfGuesses == 0){
            if(guessCount < guessLimit ) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
            } else {
               outOfGuesses = 1;
            }
    }
    if(outOfGuesses == 1){
        printf("HA HA HA YOU LOSE!!!");
        printf("\nOut Of Guesses");
    } else {
        printf("Hey You Win!");
    }*/

    double num1;
    double num2;
    char op;
    printf("Enter A Number: ");
    scanf("\n\n\n %lf", &num1);
    printf("Enter A Operator:  ");
    scanf(" %c", &op);
    printf("Enter A Number: ");
    scanf("%lf", &num2);


        if(op == '+') {
            printf("%d", num1 + num2);
        } else if(op == '-') {
            printf("%d", num1 - num2);
        } else if(op == '*') {
            printf("%d", num1 * num2);
        } else if(op == '/') {
            printf("%d", num1 / num2);
        } else {
            printf("INVALID OPERATOR");

        }


    return 0;
}
