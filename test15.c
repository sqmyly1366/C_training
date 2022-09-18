#include <stdio.h>
 
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
 
    printf("enter the first alphabet: ");
    scanf("%c",&c);
 
    // 小写字母元音
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 
    // 大写字母元音
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 
    // if 语句判断
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c  is Vowel(A,E,I,O,U)", c);
    else
        printf("%c is Consonant", c);
    return 0;
}