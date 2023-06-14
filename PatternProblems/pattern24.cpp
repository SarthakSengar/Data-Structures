#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < n-i ; k++){
            cout << "   ";
        }
        int x = 0;
        for(int j= 0;j <=i ;j++){
            ++x;
            cout << " " << x << " ";
        }
        x--;
        while(x>0){
            cout << " " << x << " ";
            x--;
        }     
        cout << endl;
    }
    return 0;    
}