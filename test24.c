#include <stdio.h>
 
int main()
{
    int n1, n2, i, gcd;
 
    printf("please enter two positif integers, seperated with espace : ");
    scanf("%d %d", &n1, &n2);
 
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // 判断 i 是否为最大公约数
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
 
    printf("%d and %d 's greatest common divisor is  %d", n1, n2, gcd);
 
    return 0;
}