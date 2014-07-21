#include <stdlib.h>
#include <stdio.h>





int* newmap_int(int size_dim, int size, int dim, char* filename, int* old, int* newarray)
{
        printf("inside func \n");
        FILE* file;
        int i = 0;
        int x = 0;
        file = fopen(filename, "a+");
        if(file == NULL)
        {
                printf("could not open file \n");
                return NULL;
        }
        else
        {
                printf("file open \n");
        }
        for(; i < size_dim; i++)
        {
                printf("%d\t",i);
                for(x = 0; x < dim; x++)
                {
                        newarray[i] = old[i*dim +x];
                        fprintf(file, "%d", newarray[i]);
                        if(i*dim +x > size)
                        {
                                return NULL;
                        }
                }
        }
        fclose(file);
        return newarray;
}


double* newmap_double(int size_dim,int size, int dim, char* filename, double* old, double* newarray)
{
        FILE* file;
        int i = 0;
        int x = 0;
        file = fopen(filename, "a+");
        if(file == NULL)
        {
                printf("could not open file \n");
        }

        for(; i < size_dim; i++)
        {
                for(x = 0; x < dim; x++)
                {
                        newarray[i] = old[i*dim +x];
                        fprintf(file, "%f", newarray[i]);
                }
                if(i*dim + x > size)
                {
                        return NULL;
                }
        }
        fclose(file);
        return newarray;


}
