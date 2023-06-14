#include<iostream>
using namespace std ;
int main(){
    int a,b;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;

    if(a>b){
        cout << "Answer is a";
    }
    else if((2*a)>b){
        cout << "Answer is b";
    }
}