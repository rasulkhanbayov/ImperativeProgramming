#include<stdio.h>
int main()

{
int i;
scanf("%d",&i);

switch(i) {
        case 1: puts("Only one?"); break;
        case 2: puts("I want more"); break;
        case 3: puts("Not bad"); break;
        case 4: puts("OK");
        default: puts("Invalid option");
}
return 0;
}
