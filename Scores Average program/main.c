/*A program to calculate the scores average  in subjects*/
#include <stdio.h>
int main(void) {

    //Variable n to store the number of subjects.
    int n ;
    printf("Enter The Number of Subjects\n");
    scanf("%i", &n);

    //Variable s to store the scores.
    int s[n];

    //Variable result to stor the sum of scores .
    int result = 0 ;

    //the loop is taking the scores as input and calculating the sum. 
    for(int i = 0 ; i < n ;i++ ) {
        printf("Enter the score :\n");
        scanf("%i", &(s[i]));
        result += s[i] ;
    }

    //printf function print the average in float number .
    printf("\nThe Average =  %.2f \n",result/(float)n);
    return 0;
}