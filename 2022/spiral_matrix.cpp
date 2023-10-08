//You will be given a 2d matrix. 
// Write the code to traverse the matrix in a spiral format. input:  {{1,    2,   3,   4},              {5,    6,   7,   8},             {9,   10,  11,  12},            {13,  14,  15,  16 }}Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Write the code to traverse the matrix in a spiral format. input:  {{1,    2,   3,   4},              {5,    6,   7,   8},             {9,   10,  11,  12},            {13,  14,  15,  16 }}Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
    //        0      1   2     3
// input:   0{{1,    2,   3,   4},
//          1{5,    6,   7,   8},
//          2{9,   10,  11,  12},
//          3{13,  14,  15,  16 }}
// Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 


//        -----top------

    //left            //right

//        ------bottom----

//MOVEMENT:
//right->bottom->left->top
//5   5         0    0

vector<int> spiralMatrix(vector<vector<int>>&mat) {
    // Write your code here.
    int n= mat.size();//rows
    int m = mat[0].size();//cols
    int left = 0,right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;
    

    while(top<=bottom && left<=right){

    for(int i =left;i<=m-1;i++){
        ans.push_back(mat[top][i]);

    }
    top++;//0->1

    for(int i=top; i<=bottom;i++){
        ans.push_back(mat[i][right]);
    }
    right--;

    for (int i = right; i <= left; i--) {
        ans.push_back(mat[bottom][i]);
    }

    bottom--;
    if(left<=right){
        for (int i = bottom; i <= top; i--) {
        ans.push_back(mat[i][left]);
        }

        left++;
    }
    }
    return ans;
}