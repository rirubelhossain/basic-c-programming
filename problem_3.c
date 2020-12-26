#include <stdio.h>


int main()
{

    double number ;
    double sum = 0 ;
    double avg = 0 ;
    for(int i = 0 ; i < 10 ; ++i )
    {
        scanf("%lf", &number );
        sum += number ;
    }

    avg = sum / 10 ;

    printf("The summation of 10 numbers = %lf\n", sum  );
    printf("The average of the numbers = %lf \n", avg );


    return 0;
}
