#include<iostream>
using namespace std ;
int main(){
    int n;
    cin >> n;
    char ch ='A'-1;
    for(int i =0 ; i<n ; i++){
        ch++;
        for(int j =0 ; j<i+1 ;j++){
            cout << " " << ch << " ";
        }
        cout <<endl;
    }
}