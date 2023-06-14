// Online C compiler to run C program online
#include <stdio.h>
//Function to calclulate and print the inserted value
float descount (float price ,int Discount){
    return price * (100 -Discount)/100 ;
}
int main(void)
{
    // Write C code here
    float price ;
    printf("Enter The Price\n");
    scanf("%f",&price);
    int Discount ;
    printf("Enter The Descount Percent\n") ;
    scanf("%i",&Discount);
    float sale = descount (price ,Discount) ;
    printf("the value after sale = %.1f",sale ) ;
    return 0;
}