#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter a score:- ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B':
            (score >= 70) ? 'C': 
            (score >= 60) ? 'D':
     'F';

    printf("Your grade is: %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent \n");
        break;
    case 'B':
        printf("good work\n");
        break;
    case 'C':
        printf("great job\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("Sorry, you failed\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }
    if (grade >= 'A' && grade <= 'D')
    {
        printf("Congratulations\n");
    }
    else
    {
        printf("Better luck next time\n");

        return 0;
    }
}