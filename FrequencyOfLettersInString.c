#include <stdio.h>
#define HIGH 255

int main (int argc, char *argv[])
{
   
   if( argc == 2 ) 
   {

//    char s[50];
   int fuc[26] = {0}; // frequency of upper case
   int flc[26] = {0}; // frequency of lower case
    int f[HIGH]; // Store frequency of each character
    int i,j = 0, high;
    int l;


   for (i = 0; argv[1][i] != '\0'; ++i) // iisa isahin ang letters sa string hanggang mareach ang null
   {   
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
      {
        ++flc[argv[1][i] - 97]; //a is 97, b is 98...;  f[0] is a, f[1] is b...
      }   
   } 
    for (j = 0; argv[1][j] != '\0'; ++j)
   { 
      if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
      {
        ++fuc[argv[1][j] - 65];
      }   
   }

   printf("Frequency count for each character in the string:\n");
   for (i = 0; i < 26; ++i)
   {
       if (flc[i] != 0)
       {
         printf("'%c' = %d\n", (i + 97), flc[i]);  
        
       }
   }
   for (j = 0; j < 26; ++j)
   {
       if (fuc[j] != 0)
       {
          printf("'%c' = %d\n", (j + 65), fuc[j]); 
       }
   }

   for(i=0; i<HIGH; i++)
    {
        f[i] = 0;
    }

    i=0;
    while(argv[1][i] != '\0')
    {
        l = (int)argv[1][i];
        f[l] += 1;

        i++;
    }

    high = 0;
    for(i=0; i<HIGH; i++) //high is the string frequency
    {
        if(f[i] > f[high])
        {
            high = i;
        }
    }

   printf("Character with the highest frequency (%d) is '%c'", f[high], high);
}


   else if( argc > 2 ) 
   {
      printf("Too many arguments supplied.\n");
   }
   else 
   {
      printf("One argument expected.\n");
   }
}



