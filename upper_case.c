#include <stdio.h>


int main()
{
    char ch ;
    scanf("%c", &ch );

    if( ch >= 'A' && ch <= 'Z')
        printf("the character is upper case\n");
    else
        printf("the character lower case\n");


    return(0);
}
