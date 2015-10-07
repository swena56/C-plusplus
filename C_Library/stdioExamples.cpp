#include <stdio.h>
/*
	stdio.h Input/Output operations such as reading, printing, formating, 
	- file operations
*/

int charInOut()
{
	//fgetc
	//fgets
	//fputc
	//fputs
	//getc
	//getchar
	//gets
	//putc
	//putchar
	char c;
	 for (c = 'A' ; c <= 'Z' ; c++) putchar (c);
}


int main()
{
	// fopen and fclose
	FILE * pFile1;
	pFile1 = fopen("myfile.txt","w");
	if (pFile1 != NULL)
	{
		fputs("fopen example",pFile1);
		fclose(pFile1);
	}


	//tmpfile -> creates a tmpFile
	FILE * pFile = tmpfile();
	fclose(pFile);

	//tmpnam  -> generate temporary filename
	char buffer [] = "test";
	tmpnam (buffer);
	printf("Tempname : %s\n" ,buffer);

	//rename() ->  used for renaming files

	//remove -> is used for deleting files
	if (remove( "fileToDelete.txt" ) != 0 )	
		printf("error deleting the file fileToDelete.txt ");		
	else
		printf("fileToDelete.txt was deleted");		

	printf("\n");
	charInOut();
	
	printf("\n");
	return 0;
}



