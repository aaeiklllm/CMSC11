#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;
   fptr = fopen("inputs.txt","r");
   int *array;
   int holder;

   array = (int*) malloc (1000 * sizeof(int));


   if ((fptr = fopen("inputs.txt", "r")) == NULL)
   {
       printf("Error! File not found.\n");
       exit (1);
   }

   else
   {
      for (int i = 0; i < 1000; ++i)
      {
         fscanf(fptr, "%d", &array[i]);
      }

      for (int i = 0; i < 1000; ++i)
      {
         if (array [i] > array[0])
         {
            holder = array[i];
            array[i] = array[0];
            array[0] = holder;
         }
         
      }
      printf("Largest element = %d\n", *array);
         
      }

   free(array);
   fclose(fptr);
}
