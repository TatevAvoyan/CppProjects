#include "iostream"
#include "func0.h"
using namespace std;

void age(int year, int month ){

    const int this_year = 2021;
    const int this_month = 9;
    cout << "Write Your year of birth." << endl;
    scanf("%d", &year);
    cout << "Write the month of Your birth in numbers." << endl;
    scanf("%d", &month );

    if(month < this_month){
        cout << "Hello, You are " << this_year - year << " years old." << endl;
    } else{
        cout << "Hello, You are " << this_year - year - 1 << " years old." << endl;
    }

}
