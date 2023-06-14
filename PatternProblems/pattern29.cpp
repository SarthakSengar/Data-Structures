#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n;
    for(int i = 0 ;i<n ; i++){
        for(int j=0 ; j<n-i ;j++){
            cout << " ";
        }
        if(i==0){
            cout <<"* ";
        }
        else if(i==n-1){
            for(int k = 0 ; k < n ;k++){
                cout << "* ";
            }
        }
        else{
            cout<< "* ";
            for(int l = 0; l <i-1 ;l++){
                cout <<"  ";
            }
            cout<< "* ";
        }
        cout<<endl;
    }
    
}