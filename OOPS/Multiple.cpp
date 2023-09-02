#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"barking"<<endl;
    }

};

class Human{
    public:
    int name;
    
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class Both : public Animal, public Human{

};
int main()
{
    Both b;
    b.speak();
    b.bark();
    return 0;
}