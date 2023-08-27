// CPP program to illustrate
// use of new keyword
#include<iostream>
using namespace std;
//class:template for an object
//containing functions and properties

class car
{
	string name;
	int num;

	public:
        //constructor 
		car(string a, int n)
		{
			cout << "Constructor called" << endl;
			this ->name = a;
			this ->num = n;
		}

		void enter()
		{
			cin>>name;
			cin>>num;
		}

		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Num: " << num << endl;
		}
};

int main()
{
	// Using new keyword:create an object of class car
    //using dynamic allocation in heap
	//implicit constructor
	car *p = new car("Honda", 2017);
	p->display();
    }
