#include <stdio.h>

int main()
{
    int a = 3 , c = 1 , d = c ;

    a-=1 ;

    printf("a=%d b=%d\n", a , c );

    c+= 2 ;

    printf("a=%d b=%d\n", a , c );

    c*=a ;
    printf("a=%d b=%d\n", a , c );

    !( a!=c && a<=c)|| !(a!=c && d<=2)? printf("block 1"):printf("Block 2");




    return(0);
}
