#include <stdio.h>
#include <stdlib.h>
struct house
{
int houseNumber;
struct house *previous;
struct house *next;
};
int main(void)
{
struct house house1;
struct house house2;
struct house house3;
struct house house4;
house1.houseNumber = 1;
house2.houseNumber = 3;
house3.houseNumber = 5;
house4.houseNumber = 7;
house1.next = &house2;
house2.next = &house3;
house3.next = &house4;
house4.next = NULL;
house1.previous = NULL;
house2.previous = &house1;
house3.previous = &house2;
house4.previous = &house3;
struct house *firstHouse = &house1;
struct house *lastHouse = &house4;
struct house *current;
current = firstHouse;
printf( "Ascending order \n");

for (int i = 0; i < 4; i++){
printf("%d \n", current->houseNumber);
current = current->next;
}
current = lastHouse;
printf("Descending order \n");
for (int i = 0; i < 4; i++){
printf("%d \n", current->houseNumber);
current = current->previous;
	}
return 0;
}
