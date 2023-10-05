// Find the count of substrings in alphabetic order
//return true/false
#include<iostream>
using namespace std;

int findString(string str){
    int result = 0;
    int n =str.size();

    for(int i=0; i<n-1; i++)
    //alphabetic
    if(str[i] +1 == str[i+1]){
        result ++;
        while(str[i] +1 ==str[i + 1]){

        i++;
    }
    }
    return result;
    }



int main()
{
      string str = "alphabet";
 
    cout << findString(str) << endl;
 
    return 0;
}