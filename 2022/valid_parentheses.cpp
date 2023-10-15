// Given a string containing just the characters '(' and ')', 
// return the length of the longest valid (well-formed) parentheses 
// substring


class Solution {
public:

    int longestValidParentheses(string s) {
        //approach
        //store the ( first  ,into "char stack"
        stack<char> ct;
        stack<int> index;
        int maxLen =0;

        //"index stack" maintained along:: start from -1(index);
        index.push(-1);

        //the index stack increases+1;

        for(int i=0; i<s.length();i++){ 
            //if ( push into index stack
            if(s[i]=='('){
                ct.push('(');
            index.push(i);
            }
            else{
                if(!ct.empty() && ct.top()=='(')
                {
                    ct.pop();
                    index.pop();
        //len = max of char[i]-index(top);
                   maxLen = max(maxLen, i - index.top());

                }else{
                    index.push(i);
                }
                

            }
        }
        return maxLen;

    }
};