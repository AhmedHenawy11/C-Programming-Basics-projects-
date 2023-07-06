// program searches in array of strings to see if the input name is exist
#include <stdio.h>
#include <string.h>

int main() 
{
    char names [3] [10] = {"ahmed","omar","alaa"} ;
    char search [10] ;
    printf("What is the name you want to search ?  ");
    scanf("%s",&search);
    
    for (int i = 0 ; i < 3 ; i++)
    {
        if (strcmp(names[i],search) == 0)
        {
            printf("\nThe name is found .");
            return 0;
        }
    }
    printf("\nName not fount") ;
    return 1 ;
}
