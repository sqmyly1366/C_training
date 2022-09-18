#include <stdio.h>
 
int main() {
   int a, b;
 
   a = 11;
   b = 99;
 
   // 也可以通过以下代码实现让用户在终端输入两个数
   printf("a=:");
   scanf("%d", &a);
   printf("b=:");
   scanf("%d", &b);
 
   if(a > b)
      printf("a greater than b");
   else
      printf("a smaller than b");
 
   return 0;
}