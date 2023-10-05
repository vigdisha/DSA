#include<iostream>
using namespace std;
//parent class
class Human{
    public:
    int height;
    int weight;

public:

int getheight() {
    return this->height;
}

void getweight(int w) {
this->weight =w;
cout<< w;
}
};
//child class
class woman:public Human{
    public:
    int roll_no;
};


int main()
{
    woman w1;
    // cout<<w1.weight<<endl;
    cout<<w1.height<<endl;
    w1.getweight(50);
    // cout<<w1.weight<<endl;
    
    return 0;
}


//for proctected memners you can use them inside the class
//and in the derived class