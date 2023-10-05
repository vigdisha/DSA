#include<iostream>
using namespace std;

class Complex{
int a, b;

public:
//constructor:
Complex(void);
//automatically invoked when object is created
void printdata(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};
//scope resolution operator
Complex ::Complex(void){
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printdata();
    return 0;
}





