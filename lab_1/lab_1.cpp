#include <iostream>
#include <time.h>
#include <string.h>

int main()
{
    printf("1 exercise");
    printf("\n");
    int number_1 = 5, number_2 = 2;
    float result = 0;
    result = number_1 / number_2;
    printf("result = %.2f", result);
    printf("\n\n");

    printf("2 exercise");
    printf("\n"); 
    const float pi = 3.14;
    printf("pi = %.2f", pi);
    printf("\n\n");

    printf("3 exercise");
    printf("\n");
    char something;
    printf("Enter the char:");
    scanf_s("%c", &something);
    printf("You enter symbol %c, his ASCII-code: %d", something, something);
    printf("\n\n");

    printf("4 exercise");
    printf("\n");
    float number_f = 0;
    printf("Enter the int number:");
    scanf_s("%d", &number_1);
    printf("\n"); 
    printf("Enter the float number:");
    scanf_s("%f", &number_f);
    result = number_1 + number_f;
    printf("result = %.2f", result);
    printf("\n\n");

    printf("5 exercise");
    printf("\n");
    char next;
    printf("Enter the char:");
    scanf_s("%c", &something);
    next = something + 1;
    printf("You enter symbol %c, his ASCII-code: %d", next, next); 
    printf("\n\n");

    printf("Creative task\n");
    char name[20];
    int randomNumber;

    printf("Enter your name: ");
    scanf_s("%s", name, sizeof(name));

    srand(time(NULL));
    randomNumber = (rand() % 100) + 1;

    printf("%s, there random number: %d\n", name, randomNumber);
    printf("Enter the sume of this number\n");
    printf("First number:");
    scanf_s("%d", &number_1);
    printf("Second number:");
    scanf_s("%d", &number_2);

    if (number_1 + number_2 == randomNumber) {
        printf("Congratulation, %s! You are right!\n", name);
    }
    else {
        printf("Unfortunately, %s, you did mistake. Try in the next time.\n", name);
    }

    return 0;
}
