#include <stdio.h>



int main()
{
    int number_1 , number_2 ;
    float number_3 ;
    float sum ;

    printf("enter three number form keyboard \n");
    scanf("%d%d%f", &number_1,&number_2,&number_3);


    sum = number_1 + number_2 + number_3 ;

    printf("the summation is = %f", sum );

    return(0);
}
