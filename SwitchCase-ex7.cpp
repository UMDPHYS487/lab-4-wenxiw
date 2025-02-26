// add your code here
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Please enter an interger value here: ";
    cin >> n;
    
    int i; 
    if(n<10 && n%2==0){
        i = 0;
    }
    else if(n%2==1){
        i = 1;
    }
    else 
        i = 2;

    switch(i){
    case 0:
        cout << n*n << '\n';
        break;
    
    case 1:
        cout<< n/2.0 << '\n';
        break;

    case 2:
        cout <<"hahaha" << '\n';
        break;
    
    }
}