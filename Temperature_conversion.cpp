/*
    Author: Kareem Hany
    Version: 1.0
    File Description: This is a simple program to convert from Celsius to Fahrenheit or from Fahrenheit to Celsius
*/

#include <iostream>
#include <cmath>



int main()
{
    double Temperature;
    char unit;

    std::cout<<"********************** Temperature Conversion Program ************************"<<std::endl;
    std::cout<<"\n";

    std::cout<<" Enter the unit that you wish to convert to " <<std::endl;
    std::cout<<"\n";

    std::cout<<" If you want to convert to Fahrenheit, enter F " <<std::endl;
    std::cout<<"\n";

    std::cout<<" If you want to convert to Celsius, enter C "<<std::endl;
    std::cout<<"\n";

    std::cin>>unit;

    std::cout<<" Enter the temperature "<<std::endl;
    std::cin>>Temperature;

    /* If the user wants to convert the temperature from Fahrenheit to Celsius, This equation will be applied */
    if(unit=='C' || unit=='c')
    {
        Temperature= (Temperature-32.0) / (1.8);

        std::cout<<" The Temperature is "<<Temperature<<" °C "<<std::endl;
    }

    /* If the user wants to convert the temperature from Celsius to Fahrenheit, This equation will be applied */
    else if(unit=='F' || unit=='f')
    {
        Temperature= (Temperature * 1.8) + 32.0;

        std::cout<<" The Temperature is "<<Temperature<<" °F "<<std::endl;
    }

    else
    {
        std::cout<<" Please enter either F or C " <<std::endl;
    }

    return 0;
}
