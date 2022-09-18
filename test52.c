#include <stdio.h>
 
int main()
{
   int data[5], i;
   printf("enter elements: ");
 
   for(i = 0; i < 5; ++i)
     scanf("%d", data + i);
 
   printf("What you entered are: \n");
   for(i = 0; i < 5; ++i)
      printf("%d\n", *(data + i));
 
   return 0;
}