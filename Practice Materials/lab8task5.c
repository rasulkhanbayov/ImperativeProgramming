#include<stdio.h>
#include<string.h>

struct people {
    char  firstname[20];
    char  lastname[20];
}; //Please don't forget this semicolon

int main() {

struct people p1;
strcpy(p1.firstname, "Mary");
strcpy(p1.lastname, "Smith");
struct people p2;
strcpy(p2.firstname, "James");
strcpy(p2.lastname, "Johnson");
struct people p3;
strcpy(p3.firstname, "Patricia");
strcpy(p3.lastname, "Williams");
struct people p4;
strcpy(p4.firstname, "John");
strcpy(p4.lastname, "Brown");

printf("%s %s \n", p1.firstname, p1.lastname);
printf("%s %s \n", p2.firstname, p2.lastname);
printf("%s %s \n", p3.firstname, p3.lastname);
printf("%s %s \n", p4.firstname, p4.lastname);
return 0;
}

