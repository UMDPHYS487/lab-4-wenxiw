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
    int n;
    cout<< "Please enter an interger value here: ";
    cin >> n;
    cout <<"The value you entered is " << n;
    cout<< " and its factorial is " << factorial(n) << ".\n";
}