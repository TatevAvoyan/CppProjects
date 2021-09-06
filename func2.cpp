#include "iostream"
#include "func2.h"
using namespace std;

void arr(int num, int arr1[]){

    int len = 8;
    for (int i = 0; i < len ; i++){

        if (num > arr1[i]){
            continue;
        } else{
            num = arr1[i];
            cout << num << ", ";
        }
    }
}
