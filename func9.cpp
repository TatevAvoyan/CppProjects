#include "iostream"
#include "func9.h"
using namespace std;

/*
BCPL    1966
C       1972
C++     1985
C++ 98  1998
C++ 03  2003
C++ 11  2011
C++ 14  2014
C++ 17  2017
C++ 20  2020
C++ 23  2023

*/

void cpp_year(){

    int year = 0;
    cout <<  "When C ++ first appeared?" << endl;
    cin >> year;

    switch (year) {
        case 1966: cout << "This is the year the BCPL was created"; break;
        case 1972: cout << "This is the year the C was created"; break;
        case 1985: cout << "That's right C++ first appeared in 1985"; break;
        case 1998: cout << "This is the year the C++ 98 was launched"; break;
        case 2003: cout << "This is the year the C++ 03 was launched"; break;
        case 2011: cout << "This is the year the C++ 11 was launched"; break;
        case 2014: cout << "This is the year the C++ 14 was launched"; break;
        case 2017: cout << "This is the year the C++ 17 was launched"; break;
        case 2020: cout << "This is the year the C++ 20 was launched"; break;
        case 2023: cout << "In 2023 wil be launched C++ 23"; break;
        default: cout << "Wrote incorrect data, please write the date of C++ appearance." << endl;
    }


}
