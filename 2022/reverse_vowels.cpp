
#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
bool isvowel(char ch){
    return (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u');
}
string reverseVowels(string &s)
{
    // Write your code here.  
    int n = s.length();
    //using 2 pointers
    int i =0; 
    int j=n-1;

    while(i<j){
        if(!isvowel(s[i])){
            i++;
        continue;
        }
        if(!isvowel(s[j])){
            j--;
        }
        swap(s[i], s[j]);
    
    i++;
    j--;
    }
return s;
}
int main() {
    string input = "hello";
    string result = reverseVowels(input);
    cout << result << endl;  // This will output "Hollo, Werld!"
    return 0;
}
