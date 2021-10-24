#include<stdio.h>

int main(){
int i;
scanf("%d",&i);
int a;
a=0;
switch(i) {
        case 12: a=a+30;
        case 11: a=a+31;
        case 10: a=a+30;
        case 9: a=a+31;
        case 8: a=a+31;
        case 7: a=a+30;
        case 6: a=a+31;
        case 5: a=a+30;
        case 4: a=a+31;
        case 3: a=a+29;
       case 2: {
			a=a+31;
		}
        case 1: {
			a=a;
			break;
		}  
        default: puts("Error: no such month in my calendar"); break;
}
printf("There are %d days before this month \n", a);

return 0;
}

