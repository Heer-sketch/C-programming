#include<stdio.h>
int main()
{
    int score,grade;

    printf("enter your score");
    scanf("%d",&score);

    grade = (score >=90) ?'A':
            (score >=80) ?'B':
            (score >=70) ?'C':
            (score>=60) ?'D':'F';

            printf("your grade is %c\n" ,grade);
            return 0;



//     if(score >=90)
//   printf("Excellent work!.");    
//     else if(score >=80)
//   printf("Well done.");    

//     else if(score >=70)
//   printf("Good job.");    
//     else if(score >=60)
//   printf("You passed,");    

//     else
//     printf("sorry you are failed");




    
}
