#include<iostream>
using namespace std;
int charCount(string str){
    int char_count = 1;
    char current = str[0];
    int len = str.length(); 
    for(int i=0; i<len;i++){
        if(str[i]==current){
            char_count++;
        }
        else{
            cout<<current<<char_count;
            current = str[i];
            char_count = 1;
        }
    }
    cout << current << char_count << endl;
}


int main()
{
string str="aaabbcc";
charCount(str);  
}