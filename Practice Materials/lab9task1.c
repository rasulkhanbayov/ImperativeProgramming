/*
#include<stdio.h>

int main()

        {
        FILE * filePointer;
        filePointer=fopen("Text.txt","w");
        char string[]="file handling", recieved_string[20];

        if (filePointer==NULL)
                printf("Can't create file");
        else
                {
                printf("File is created successfully \n");
//write into file
                for (int i = 0; string[i]!='\0'; i++)
                fputc(string[i], filePointer);
                }

//read whole string from file
        fclose(filePointer);
        filePointer = fopen("Text.txt","r");
        fgets(recieved_string,sizeof(recieved_string),filePointer);
        printf("%s \n", recieved_string);
        fclose(filePointer);
        return 0;
        }
*/
#include<stdio.h>

int main()

        {
        FILE * filePointer;
        filePointer=fopen("Text.txt","w");
        char string[]="file handling";
        char ch;

        if (filePointer==NULL)
                printf("Can't create file");
        else
                {
                printf("File is created successfully \n");
                for (int i = 0; string[i]!='\0'; i++)
                fputc(string[i], filePointer);
                }
//read one by one
        fclose(filePointer);
        filePointer = fopen("Text.txt","r");
        while((ch=fgetc(filePointer)) != EOF)  
        printf("%c", ch);
        fclose(filePointer);
        return 0;
        }

