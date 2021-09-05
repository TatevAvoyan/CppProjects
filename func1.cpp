#include "iostream"
#include "func1.h"

int num(int start, int end){

        int sum = 0;
        for (; start <= end; start++)
            sum = sum + start;

    return sum;
}
