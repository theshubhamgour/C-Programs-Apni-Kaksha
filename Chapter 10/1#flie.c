#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    // if (fptr == NULL)
    // {
    //     printf("File doesn't exists\n");
    // }
    // else
    // {
    //     fclose(fptr);
    // }


    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n",ch);  //used for printing
    // fclose(fptr);

    // fprintf(fptr,"%c",'M');   //used for writing
    // fclose(fptr);

    // printf("%c\n",fgetc(fptr));  //printing using fgetc
    // fclose(fptr);

    fputc('M',fptr);  //writing using fputc
    fputc('A',fptr); 
    fputc('N',fptr);
    fputc('G',fptr); 
    fputc('O',fptr);

    fclose(fptr);

    return (0);
}