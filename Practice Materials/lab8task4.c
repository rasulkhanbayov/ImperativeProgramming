#include<stdio.h>
#include<string.h>

struct student {
    char  name[20];
    int   age;
    float grade;
}; //Please don't forget this semicolon

int main() {

struct student s1;
strcpy(s1.name, "John");
s1.age=19;
s1.grade=4.5;
//Alternative option: struct student s1={"John",19, 4.5};
printf("%s, %d, %.2f", s1.name, s1.age, s1.grade);

return 0;
}
