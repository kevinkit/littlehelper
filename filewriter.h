#ifndef FILEWRITER_H
#define FILEWRITER_H



//////////////////////////////////////////////////////////////////////////////////
/* all "add____" functions are adding values to the file			*/
/* all "over___" functions are overwriting the values in the file ! 		*/
/*______________________________________________________________________________*/
/* all functions besides addo or overo are not good for loops due to opening    */
/* and closing the file everytime they are used. Better use addo or overo       */
/* for opening them only once. 							*/
/*										*/
/////////////////////////////////////////////////////////////////////////////////

FILE* addo(FILE* file, char* filename)
{
	file = fopen(filename, "a+");
	if(file == NULL)
	{
		printf("Error in opening %s", filename);
		exit(1);
	}
	else
	{
		return file;
	}

}


int addowic(char* filename, int value)
{
	FILE* file;
	file = fopen(filename, "a+");
	if(file == NULL)
	{
		printf("Eror in opening %s", filename);
		exit(1);

	}
	else
	{
		fprintf(file, "%d\t", value);
		fclose(file);
		return 1;
	}
}

int addowdc(char* filename, double value)
{
        FILE* file;
        file = fopen(filename, "a+");
        if(file == NULL)
        {
                printf("Eror in opening %s", filename);
                exit(1);

        }
        else
        {
                fprintf(file, "%f\t", value);
                fclose(file);
                return 1;
        }
}




int addowcc(char* filename, char* string)
{

	FILE* file;
        file = fopen(filename, "a+");
        if(file == NULL)
        {
                printf("Eror in opening %s", filename);
                exit(1);

        }
        else
        {
                fprintf(file, "%s\t", string);
                fclose(file);
                return 1;
        }





}

FILE* overo(FILE* file, char* filename)
{
        file = fopen(filename, "w+");
        if(file == NULL)
        {
                printf("Error in opening %s", filename);
                exit(1);
        }
        else
        {
                return file;
        }

}




int overowic(char* filename, int value)
{
        FILE* file;
        file = fopen(filename, "w+");
        if(file == NULL)
        {
                printf("Eror in opening %s", filename);
                exit(1);

        }
        else
        {
                fprintf(file, "%d\t", value);
                fclose(file);
                return 1;
        }
}

int overowdc(char* filename, double value)
{
        FILE* file;
        file = fopen(filename, "w+");
        if(file == NULL)
        {
                printf("Eror in opening %s", filename);
                exit(1);

        }
        else
        {
                fprintf(file, "%f\t", value);
                fclose(file);
                return 1;
        }
}




int overowcc(char* filename, char* string)
{

        FILE* file;
        file = fopen(filename, "w+");
        if(file == NULL)
        {
                printf("Eror in opening %s", filename);
                exit(1);

        }
        else
        {
                fprintf(file, "%s\t", string);
                fclose(file);
                return 1;
        }


}











#endif
