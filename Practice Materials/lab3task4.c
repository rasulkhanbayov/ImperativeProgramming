#include <stdio.h>

int main()
{
float studentAYear1 = 4.2; 
float studentAYear2 = 4.5; 
float studentAYear3 = 4.2; 

float studentBYear1 = 4.3; 
float studentBYear2 = 4.4; 
float studentBYear3 = 4.7; 

float studentCYear1 = 4.3; 
float studentCYear2 = 4.8; 
float studentCYear3 = 4.9; 

printf("Student name :  1stYGrade 2ndYGrade 3rdYGrade     Avg \n");
printf("Student A :  %9.2f ", studentAYear1) ;
printf("%9.2f", studentAYear2);
printf("%9.2f   ", studentAYear3, "\n");
printf("%9.2f", (studentAYear1 + studentAYear2+studentAYear3)/3);
printf("\nStudent B :  %9.2f ", studentBYear1) ;
printf("%9.2f", studentBYear2);
printf("%9.2f   ", studentBYear3, "\n");
printf("%9.2f", (studentBYear1 + studentBYear2+studentBYear3)/3);
printf("\nStudent C :  %9.2f ", studentCYear1) ;
printf("%9.2f", studentCYear2);
printf("%9.2f   ", studentCYear3, "\n");
printf("%9.2f", (studentCYear1 + studentCYear2+studentCYear3)/3);
return 0;
}
