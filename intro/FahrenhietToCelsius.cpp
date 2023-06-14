#include<iostream>
using namespace std ;
int main(){
    float start_fahrenhiet,end_fahrenhiet,step_size;
    cout <<"Enter start_fahrenhiet : ";
    cin >> start_fahrenhiet;
    cout << "Enter end_fahrenhiet : ";
    cin >> end_fahrenhiet;
    cout << "Enter step_size : ";
    cin >> step_size;

    for(float i = start_fahrenhiet ; i <=end_fahrenhiet ; i+=step_size){
        float celsius = (i-32)*(5.0/9.0);       //IF WE WRITE 5/9 it gives zero 
        cout << i << " -- > " << celsius <<endl;
    } 
}