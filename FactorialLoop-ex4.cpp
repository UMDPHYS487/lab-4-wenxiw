// Add your code here
#include <iostream>
using namespace std;
int factorial (int n)
{
    int f = n;
    for (n; n>1;){
        f = f*(n-1);
        n--;
    }
    return f;
}

int main()
{
    int n = 1;
    while (n<10) {
        cout << " Its factorial is "; cout << factorial(n); cout << ".\n";
        n++;
    }
}


