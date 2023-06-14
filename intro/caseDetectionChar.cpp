#include<iostream>
using namespace std ;
int main(){
    char c;
    cout << "Enter character :";
    cin >> c;
    if(c>='a' && c<='z'){
        cout<< "this is lowercase"; 
    }
    else if(c>='A' && c<='Z'){
        cout << "this is uppercase";
    }
    else if(c>='0' && c<='9'){
        cout << "this is numeric";
    }
}