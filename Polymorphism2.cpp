#include<iostream>
using namespace std;
/////..RUN Time polmorphism

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
//run time poly :possible via inheritence only;
class Dog :public Animal{
    public:

    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Dog d;
    d.speak();
    return 0;
}