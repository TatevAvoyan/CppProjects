#include "iostream"
#include "func0.h"


void age(int year, int month ){

    const int this_year = 2021;
    const int this_month = 9;
    std::cout << "Write Your year of birth \n";
    scanf("%d", &year);
    std::cout << "Write the month of Your birth in numbers \n";
    scanf("%d", &month );

    if(month < this_month){
        std::cout << "Hello, You are " << this_year - year << " years old.\n";
    } else{
        std::cout << "Hello, You are " << this_year - year - 1 << " years old.\n";
    }

}
