#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s =0;
    int e =n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int length(char name[]){
    int count =0;
    for(int i=0;name[i]!=0;i++ ){
        count++;
    }
    return count;
}

bool palindrome(char a[], int n){
    //consider the upper case and lower case is not same
   int s=0; 
   int e=n-1;
   while(s<=e){
        if(a[s]!=a[e])
        {
        return 0;
        }
        else{
        s++;
        e--;
        }

   }
   return 1;
}
int main()
{
    char name[20];
    
    cout<<"Enter your name: "<<endl;
    cin>>name;

    int len = length(name);
    cout<<"length "<<length(name)<<endl;
     reverse(name,len);
    cout<<"name reversed "<<name<<endl;

    cout<<"palindrome or not:"<<palindrome(name, len);
    return 0;
}