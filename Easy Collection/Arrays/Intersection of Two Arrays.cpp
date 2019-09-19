//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

/*
Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        for(int x:nums1){
            m[x]++;
        }
        vector<int> res;
        for(int x:nums2){
            if(m[x]-- > 0)
                res.push_back(x);
        }
        return res;
    }
};