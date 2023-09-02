#include<iostream>
using namespace std;
class Animal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog :  public Animal{
int name;
};

class puppy : public Dog{

};

int main()
{
    Dog d;
    puppy p;
    p.speak();
    cout<<p.age<<endl;
    return 0;
}