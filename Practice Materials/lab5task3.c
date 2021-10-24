#include<stdio.h>
int main(){
char good[5] = {'g','o','o','d','\0'};
char bad[4] = {'b', 'a', 'd','\0'};
char ugly[5] = {'u','g','l','y', '\0'};
printf("%s %s %s \n", good, bad, ugly);
}
