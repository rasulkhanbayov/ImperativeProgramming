# include <stdio.h>
# include <string.h>
int main( )
{
FILE *filepointer1;
FILE *filepointer2;
char dataToBeRead[1000];
int i;
filepointer1 = fopen("Sample.txt","r");
filepointer2 = fopen("code.txt","w");
 if ((filepointer1 == NULL) || (filepointer2 == NULL)){
printf("File not opened");
}
 else{
printf("The file is now opened.\n") ;
i = 1;
while( fgets ( dataToBeRead, 1000, filepointer1 ) != NULL ){
fprintf(filepointer2, "%d %s",i,dataToBeRead );
i++;
}
fclose(filepointer1);
fclose(filepointer2);
}
return 0;
}
