/*
    Author: Kareem Hany
    Version: 1.0
    Date: 29/11/2024
    File Description: This is a small program to calculate the hypotenuse of a right angle triangle.

*/

#include <iostream>
#include <cmath>

int main()
{
    double side_1,side_2,hypotenuse;

    std::cout<<"Enter First side"<<std::endl; /* The user will enter the First side */
    std::cin>>side_1;

    std::cout<<"Enter Second side"<<std::endl; /* The user will enter the Second side */
    std::cin>>side_2;

    side_1=pow(side_1,2);
    side_2=pow(side_2,2);

    hypotenuse=sqrt(side_1+side_2); /* This is according to the hypotenuse calculation rule, hypotenuse=sqrt( pow(side_1,2)+pow(side_2,2) ) */

    std::cout<<"Hypotenuse= "<<hypotenuse<<std::endl;

    return 0;
}
