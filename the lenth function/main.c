#include <stdio.h>
int main()
{
    printf("Enter your name : ");
    char s[100];
    gets(s);
    int i = 0;
    while (s[i]!='\0')
    {
        i++ ;
    }
    printf("\n The lenth is :  %i\n",i);
    return 0;
}