#include <stdio.h>


int main()
{



    int i = 10 , b = i  ;
    printf("\n%d", b );

    i = i + 10 ;

    --i ;

    printf("\n%d", i );
    b = i ;

    printf("\n Hello world: %d", i );
    printf("\n%d",  b );
    b++ ;

    printf("\n%d", b);


    return(0);
}
