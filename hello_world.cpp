#include <stdio.h>


///function

int add(int number_1 , int number_2)
{
    return(number_1+number_2);
}



void palindrom(int number )
{
    int rev = number;
    int res = 0 ;

    int rec ;
    while( number != 0 )
    {
        rec = number % 10 ;
        res = res * 10 + rec ;
        number /= 10 ;
    }

    if( rev == res )printf("yes these is palindorme \n");
    else printf("not palindrom\n");

    printf("%d", res );
}


void check_evenor(int number )
{
    if( number % 2 == 1 )printf("odd\n");
    else printf("even\n");
}
void summation(int number )
{
    int sum = 0 ;
    for(int i = 1 ; i <= number ; ++i)
    {
        sum += i ;
    }
    printf("the summation is = %d \n", sum );

}

void swap_function(int *a , int *b )
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp;
}

void sort_function(int array[] , int size )
{
    for(int i = 0 ; i < size - 1 ; ++i )
    {
        for(int j = i + 1 ; j < size ; ++j )
        {
            if(array[i]  > array[j])
            {
                swap_function(&array[i] , &array[j]);
            }
        }
    }
}
void print_sorting_value(int array[] , int size )
{
    for(int i = 0 ; i < size ; ++i )
        printf("%d ", array[i]);
}

void search_li(int array[] , int size )
{
    int value ;
    scanf("%d", &value);
    int store ;
    int position ;
    int loc = 0 ;
    for(int i = 0 ; i < size ; ++i )
    {
        if( value == array[i])
        {
            store = array[i];
            position = i + 1;
            loc = 1 ;
            break ;
        }
    }
    if( loc == 1 )
        printf("yes and value is = %d and position %d\n", store,position);
    else
        printf("value not found\n");

}

int main()
{
    int number ;
    scanf("%d", &number );
    int array[number];

    for(int i = 0 ; i < number ; ++i )
        scanf("%d", &array[i]);


    sort_function(array , number);
    print_sorting_value(array,number);


    ///searching leanier
    search_li(array, number);

    return(0);
}
