//https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/601/

/*
Example:

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> r(n);
        for(int i=0;i<n;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j]+r[i-1][j-1];
            }          
        }
        return r;
    }
};