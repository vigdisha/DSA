#include<iostream>
using namespace std;
/// Compile time
class B{
public:
int a;
int b;

public:
int add(){
    return a+b;

}
//operator overlaoding
void operator+ (B &obj){
    int value1 = this->a;
    int value2 = obj.a;
cout<<"o/p "<<value2-value1<<endl;
}

};

int main()
{
  B obj1,obj2;
  obj1.a = 4;
  obj2.a = 7;

  obj1 +obj2;
    return 0;
}