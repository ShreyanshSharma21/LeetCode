//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: [1,2,3,4,5,6,7] and k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

Note:

Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
Could you do it in-place with O(1) extra space?

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int x=n-k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=nums[(i+x)%n];
        }
        for(int i=0;i<n;i++){
            nums[i]=a[i];
        }
        
    }
    
};