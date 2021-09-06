#include "iostream"
#include "func4.h"
using namespace std;

int do_while_loop(int start, int end){

    cout << start + 1 << " + " << start + 2 << " + "<< start + 3 << " + ... + " << end << " = ";
    int sum = 0;
    do {
        start++;
        sum += start;
    } while (start < end);

    return sum;
}
