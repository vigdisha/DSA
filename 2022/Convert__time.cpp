// Given a time in a 24-hour clock (military time), convert it to a 12-hour clock format.

//minutes and seconds remain smae in both cases
//using modulus of 12

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void convert12(string str){
    //gett hours form the string
    int h1 = (int)str[0] - '0';
    int h2 = (int)str[1] - '0';
    //create a 2 digit no
    int hh = h1*10 + h2; 

    //meridian conversion
    string Meridian;
    if(hh<12){
      string  Meridian = "AM";
    }
    else{
        string Meridian = "PM";
    }


  hh %= 12;

  if(hh==0){
    cout<<"12";
    //print minutes
       for (int i = 2; i < 8; ++i) {
            cout << str[i];
       }
  }
  else{
    cout<<hh;
       for (int i = 2; i < 8; ++i) {
            cout << str[i];
              }
  }
              cout<<" "<<Meridian<<endl;

}
int main()
{
    // 24 hour format
    string str = "17:35:20";
 
    convert12(str);
 
    return 0;
   
}