#include <bits/stdc++.h>
using namespace std;

void reverse(int n)
{

   // base condition to end recursive calls
   if (n < 10) {
      cout<<n;
      return;
   }

   else{
      cout<<n%10;
      reverse(n/10);
   }
}

// Driver Program
int main()
{
   int n=1234;
   reverse(n); //Calling recursive function
   return 0;
}