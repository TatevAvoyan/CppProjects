#include "iostream"
#include "func6.h"
using namespace std;

void loop(int start1, int end1, int min){

    for(; start1 < end1; start1++) {
        if (start1 < min) {
            continue;
        }
        cout << start1 << "\n";
    }
}
