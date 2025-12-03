// A Student has passed his 12th exam and based on his percentage he will be awarded grades as follows:
// Percentage >= 90% : Grade A
// Percentage >= 80% and < 90% : Grade B
// Percentage >= 70% and < 80% : Grade C
// Percentage >= 60% and < 70% : Grade D
// Percentage < 60% : Grade F
#include <stdio.h>
void main() {

    float percentage;
    printf("Enter your percentage : ");
    scanf("%f", &percentage);

    char grade;

    if (percentage >= 90) {

        grade = 'A';
    } 
    else if (percentage >= 80) {

        grade = 'B';
    } 
    else if (percentage >= 70) {

        grade = 'C';
    } 
    else if (percentage >= 60) {

        grade = 'D';
    } 
    else {

        grade = 'F';
    }

    printf("Your Grade is : %c\n", grade);
}