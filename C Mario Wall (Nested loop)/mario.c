/*Biulding a wall of code block in mario game program  */
#include <stdio.h>
/*The program is running in the main function  */
int main() {
    /*creating the varible in wich the iput data will be stord in*/
    int count ;
    /*making 2 loops the first one to get the number and sure that is the number is positive ,
    and the seconed one to create the wall in 2axis (x and y)*/
    do {
       printf("Enter the value : ");
       scanf("%i",&count );
    } while(count < 1);
    for (int i =0 ; i < count ; i++)
    {
        for(int i =0 ; i < count ; i++) 
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}