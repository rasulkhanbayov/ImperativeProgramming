#include <stdio.h>
# include <string.h>

int main(){
	//char path[100];
    char ch;
    int x=0;
    
    int characters, whitespaces,lines;
     characters = 0;
 whitespaces = 0;
 lines = 0;
	FILE *filepointer;
	int alpha[30]={0};

	filepointer = fopen("lab9task5.c","r");
	if (filepointer == NULL){
printf("ERROR opening file");
}
else{

    while ((ch = fgetc(filepointer)) != EOF)
    {
        characters++;
        if (ch == '\n'){
            lines++;
        }    
        if (ch == ' '){
            whitespaces++;
    }
        if (ch>='a' && ch <='z')
        {   x=ch-'a';
			alpha[x] +=1;
			}
 }
 
}
    //printf("\n");
    printf("Lines       = %d \n", lines);
    printf("WhiteSpaces = %d \n", whitespaces);
    printf("Characters  = %d \n", characters);
    for (int az =0; az<=26;az++){
		printf("Small letter %c : %d \n", az+'a' , alpha[az]);
		}
	fclose(filepointer);
	return 0;
	}
