#include<stdio.h>


void billing_calculation()
{
    char ch ;
    int counter_vowel = 0 ;
    int counter_consonant = 0 ;
    for(ch = 'A' ; ch <= 'Z' ; ++ch )
    {
        if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            ++counter_vowel;
        }else{
            ++counter_consonant ;
        }
    }

    printf("the number of vowel = %d \n", counter_vowel);
    printf("the number of consonant = %d \n", counter_consonant);

}


int main()
{

    billing_calculation();

    return(0);
}
