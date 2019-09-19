//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770/

/*
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Note:

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.

Example 1:

Given input matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){
            reverse(matrix[i]);
        }
    }
private:
    void reverse(vector<int> &v){
        int sz=v.size();
        int s=0,e=sz-1;
        while(s<e){
            swap(v[s],v[e]);
            s++;e--;
        }
    }
};