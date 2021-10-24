# include <stdio.h>
# include <string.h>

int main( )
{

    // Declare the file pointer
    FILE *filePointer ;

    // Get the data to be written in file
    char dataToBeWritten[100]
        = "This text is added from character array";

    // Open the existing file Test.c using fopen()
    // in write mode using "w" attribute
    filePointer = fopen("Test.c", "w") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "Test.c file failed to open." ) ;
    }
    else
    {
        printf("The file is now opened.\n") ;

        // Write the dataToBeWritten into the file
        if ( strlen (  dataToBeWritten  ) > 0 )
        {

            // writing in the file using fputs() - add whole array
            fputs(dataToBeWritten, filePointer) ;
           // writing in the file using fprintf, fputc - add only 1 char
            fprintf(filePointer, "\n");
            fputc('a', filePointer);
            fprintf(filePointer, "\n"); }

        // Closing the file using fclose()
        fclose(filePointer) ;

        printf("Data successfully written in file Test.c \n");
        printf("The file is now closed.\n") ;
    }
    return 0;
}
