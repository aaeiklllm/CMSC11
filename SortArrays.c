#include <stdio.h>

struct numbers
{
    int num;
    int magicnum;
};

int binarysearch(int class[], int low, int high, int x);
int main ()

{
int class [] = {13, 55, 1, 6, 15, 49, 150, 33, 7};
int holder, iteration, result, i = 0;
int x = 1;

for (iteration = 0; iteration < 6 ; ++iteration)
{
   for (int i=0; i<9; ++i)
   {
      if (class[i] > class[i+1])
      {
         holder = class [i+1];
         class [i+1] = class [i];
         class [i] = holder;
      }
   
   }
}

printf("Sorted array in ascending order:\n");

for (int i=0; i<9; ++i)
{
printf("%d ", class[i]);
}

result = binarysearch(class, 0, 8, x);
printf("\nElement is found at index %d\n\n", result);

struct numbers n1;
struct numbers n2;
struct numbers n3;
struct numbers n4;
struct numbers n5;
struct numbers n6;
struct numbers n7;
struct numbers n8;
struct numbers n9;

n1.num = class[0];
n2.num = class[1];
n3.num = class[2];
n4.num = class[3];
n5.num = class[4];
n6.num = class[5];
n7.num = class[6];
n8.num = class[7];
n9.num = class[8];

n1.magicnum = n1.num * result;
n2.magicnum = n2.num * result;
n3.magicnum = n3.num * result;
n4.magicnum = n4.num * result;
n5.magicnum = n5.num * result;
n6.magicnum = n6.num * result;
n7.magicnum = n7.num * result;
n8.magicnum = n8.num * result;
n9.magicnum = n9.num * result;

printf("Number: %d\t", n1.num);
printf("Magic number: %d\n", n1.magicnum);

printf("Number: %d\t", n2.num);
printf("Magic number: %d\n", n2.magicnum);

printf("Number: %d\t", n3.num);
printf("Magic number: %d\n", n3.magicnum);


printf("Number: %d\t", n4.num);
printf("Magic number: %d\n", n4.magicnum);


printf("Number: %d\t", n5.num);
printf("Magic number: %d\n", n5.magicnum);


printf("Number: %d\t", n6.num);
printf("Magic number: %d\n", n6.magicnum);


printf("Number: %d\t", n7.num);
printf("Magic number: %d\n", n7.magicnum);


printf("Number: %d\t", n8.num);
printf("Magic number: %d\n", n8.magicnum);


printf("Number: %d\t", n9.num);
printf("Magic number: %d\n", n9.magicnum);

return 0;

}

int binarysearch(int class[], int low, int high, int x)
{

int midclass = 0;

midclass = (high + low)/2;

if (class[midclass] == x)
{
   return midclass;
} 


else if (class[midclass] > x)
{
   return binarysearch(class, low, midclass-1, x);
}

else if (class[midclass] < x)
{
   return binarysearch(class, midclass+1, high, x);
}
}
