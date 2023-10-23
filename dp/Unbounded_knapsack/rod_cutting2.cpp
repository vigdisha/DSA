//when 2 arguments are given
// ie:price[], and n;
//price=[2,5,7,8,10]
//length=1,2,3,4,5 respectively
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int cutRod(vector<int> &price, int n) {
    int val[n + 1];
    val[0] = 0;

    // Build the table
    //return the last entry of the table
    for (int i = 1; i <= n; i++) {
        int max_value = INT_MIN;
        for (int j = 0; j < i; j++) {
            max_value = max(max_value, price[j] + val[i - j - 1]);
        }
        val[i] = max_value;
    }
    return val[n];
}
