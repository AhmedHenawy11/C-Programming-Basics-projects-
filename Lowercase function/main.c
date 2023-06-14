// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    char name [100] ;
    printf("Enter your name : \n");
    scanf("%s", &name);
    for(int i = 0 ;i< strlen(name) ; i++ )
    {
        if(name[i] >= 65 && name[i] <= 90 )
        {
            printf("%c", name[i] +32 ) ;
        }
        else
        {
            printf("%c", name[i]);
        }
    }
	printf("\n");
    return 0;
}