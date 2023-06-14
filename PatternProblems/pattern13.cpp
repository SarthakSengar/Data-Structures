#include<iostream>
using namespace std ;
int main(){
    int n;
    cin >> n;
    char ch ='A'-1;
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j<n ;j++){
            ch++;
            cout << " " << ch << " ";
        }
        cout <<endl;
    }
}