#include <iostream>
#include "class.h"

using namespace std;

int main () {
   float t[] = {4, 677, 23, 905, 67, 123, 7, 88, 90};
   Calculations cal;;
    cout << cal.test() << endl;
    cout << "The mean for the array is: " << cal.mean(t) << endl;
    cout << "The min for the array is: " << cal.min(t) << endl;
    cout << "The max for the array is: " << cal.max(t) << endl;
    return 0;
}
