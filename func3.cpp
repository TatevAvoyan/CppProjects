#include "iostream"
#include "func3.h"
using namespace std;

void mass(int i, int mas[5]){

    int min;
    int max;

    for (; i<5; i++){
        max = mas[0];
        min = mas[0];
    }
    for (i=1; i<5; i++){

        if (min <= mas[i]){
            max = mas[i];
        }
    }
    for (i=1; i<5; i++){

        if (min >= mas[i]){
            min = mas[i];
        }
    }
    cout << "Min number is " << min << ", Max number is " << max << endl;
}