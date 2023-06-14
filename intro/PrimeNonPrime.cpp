#include<iostream>
using namespace std ;
int main(){
  int n ;
  cin >> n;
  if(n==2||n==1){
    cout << "Prime"<<endl;
  }
  else{
    int flag = 1;
    for(int i = n/2 ; i >1 ; i--){
        if(n%i==0){
            cout << "Not Prime";
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout<<"Prime";
    }
  }
    
}