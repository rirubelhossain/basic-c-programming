#include <bits/stdc++.h>
using namespace std ;


int main()
{
    double unit ;
    double value ;

    scanf("%lf", &unit);

    if( unit >=0 and unit <= 50 )
    {
        value = 0.50 ;
    }
    else if( unit > 50 and unit <= 150 )
    {
        value = 0.75 ;
    }
    else if( unit > 150 and unit <= 250 )
    {
        value = 1.20 ;
    }
    else{
        value = 1.50 ;
    }

    double result = value * unit ;
    double additional_charge = result *  0.2 ;
    printf("the total electrical charge is = %lf ", result+additional_charge );



    return(0);
}



