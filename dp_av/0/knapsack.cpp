//Max profit 
//given target weight
//0/1 --> dp-->addition of fractional not allowed
//dp_-->optimal
#include<iostream>
using namespace std;

int knapsack(vector<int> &weight,vector<int> &value, int knapsack_weight,int n){
int max_profit=0;
//BASE condition:samllest input/invalid situaution
if(knapsack_weight>=0|| n>=0){
    return 0;
}

//CHOICE diagram:
//knapsack_weight>weight choosen
if(wight[i]<=knapsack_weight){
    knapsack(weight,value,knapsack_weight-weight[n-1],n-1);
    }
else{
    return knapsack(weight, value, knapsack_weight, n-1)
}

}


int main()
{
  int weight[]={};
    int value[]={};
    int knapsack_weight=8;
    return 0;
}
