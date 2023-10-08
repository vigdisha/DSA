#include<iostream>
using namespace std;

bool isvowel(char ch){
     ch =toupper(ch);
    return (ch == 'A' || ch == 'E'
            || ch == 'I' || ch == 'O'
            || ch == 'U');
}

string doublestring(string str){
    int len = str.length();
    string res= "";

    for(int i=0 ;i<len;i++){
        if(isvowel(str[i])){
            res += str[i];
        }
    res += str[i];
    }
    return res;    
}

int main()
{
    string str = "helloworld";
 
    // Print the original string
    cout << "Original String: "
         << str << endl;
 
    string res = doublestring(str);
 
    // Print the resultant string
    cout << "String with Vowels duplicated: "
         << res << endl;
}