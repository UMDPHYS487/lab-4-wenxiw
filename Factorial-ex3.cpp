// Add your code here
#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    int f = 1;
    while (n<10) {
        f= f*n; 
        cout << " Its factorial is "; cout << f; cout << ".\n";
        n++;
    }
}