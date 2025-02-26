// Add your code here
#include <iostream>
using namespace std;

int y;
int *x;

int main(){
    y = 10;
    x = &y;
    cout << x << "\n";
    cout << *x << "\n";
    y = 30;
    cout << *x <<"\n";
}

// The memory address does not change.
// When changing the value of y, the pointer of x change after changing the value of y because the memory address does not change.
// When we dereference the pointer of x with *x, the value of *x is the value of y.
// The dereferenced pointer *x changed after we changed the value of y. We see the value of the new defined y.