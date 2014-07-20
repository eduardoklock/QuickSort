#include <iostream>

#include "quicksort.h"

using std::cout;
using std::endl;

int main(){
    int dd [7];
    dd[0] = 5;
    dd[1] = 0;
    dd[2] = 7;
    dd[3] = 4;
    dd[4] = 3;
    dd[5] = 9;
    dd[6] = 2;

    quickSort(dd, 0, 6);

    cout << dd[0] << dd[1] << dd[2] << dd[3] << dd[4] << dd[5] << dd[6];

    return 0;
}