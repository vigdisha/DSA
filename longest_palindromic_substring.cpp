class Solution {
public:
    string longestPalindrome(string input) {
        int n =s.length();
vector<vector<bool>> p(n, vector<bool>(true, n));

int maxlen =1;
int start=0;

//size=1
(int i=0;i<=length;i++){
    p[i][i]=true;
    }
//len=2
for(int i=0;i<n-1;i++){
    if(input[i]==input[i+1]){
        p[i][i+1]=true;
        maxlen =2;
        start=i;
    }
}

//len>2
for(int len =3;len<=n;len++){
    for(int i=0;i<n;i++){
        int j=len+i-1;

        if(input[i]==input[j]&& p[i+1][j-1]){
            p[i][j]=true;
if(len>maxlen){
    maxlen = len;
     start = i;
}
        }

    }
}

 return input.substr(start, maxLength);

    }
};