#include<iostream>
using namespace std ;
int main(){
    int a = 1 ; 
    float b = 1.4f;
    char c= 'c';            // only single character !'cd'not allowed
    bool d= true;           //when printed returns 1 or 0
    double e = 1.23;

    unsigned int h = -1;

    cout << a << "      " <<sizeof(a) << endl;
    cout << b << "      " <<sizeof(b) << endl;
    cout << c << "      " <<sizeof(c) << endl;
    cout << d << "      " <<sizeof(d) << endl;
    cout << e << "      " <<sizeof(e) << endl;
    cout << h << "      " <<sizeof(h) << endl; // large size due to how negative numbers are stored 
    
    //naming rules 

    int abc = 1;
    int _bc = 1;
    // int @bc = 1; other special characters 
    // int 1bc = 1;

    //arethmetic operators 

    int f = 1;
    int g = 2;

    cout << "operators" << endl;
    cout << "(f+g) =" << (f+g) <<endl;
    cout << "(f-g) =" << (f-g) <<endl;
    cout << "(f/g) =" << (f/g) <<endl; // int output hence output 0
    cout << "(f*g) =" << (f*g) <<endl;
    cout << "(f%g) =" << (f%g) <<endl;

    

}