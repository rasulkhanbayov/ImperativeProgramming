// C program to Open a File,
// Read from it, And Close the File
/*
# include <stdio.h>
# include <string.h>

int main( )
{

    // Declare the file pointer
    FILE *filePointer ;

    // Declare the variable for the data to be read from file
    char dataToBeRead[100];

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("Test.c", "r") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "Test.c file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        // Read the dataToBeRead from the file
        // using fgets() method
        while( fgets ( dataToBeRead, 100, filePointer ) != NULL )
        {
            // Print the dataToBeRead
            printf( "%s" , dataToBeRead ) ;
         }
// Closing the file using fclose()
        fclose(filePointer) ;

        printf("Data successfully read from file Test.c\n");
        printf("The file is now closed.") ;
    }
    return 0;
}
		*/
# include <stdio.h>
# include <string.h>

int main( )
{

    // Declare the file pointer
    FILE *filePointer ;

    // Declare the variable for the data to be read from file
   // char dataToBeRead[50];
  int ch;
    // Open the existing file Test.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("Test.c", "r") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "Test.c file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        // Read the dataToBeRead from the file
        // using fgetc() method
        while( (ch=fgetc( filePointer )) != EOF )
        {

            // Print the dataToBeRead
            printf( "%c" , ch ) ;
         }
// Closing the file using fclose()
        fclose(filePointer) ;

        printf("Data successfully read from file Test.c\n");
        printf("The file is now closed.") ;
    }
    return 0;
}	 
		 
		 
		 
		
