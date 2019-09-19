//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/

/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;                    
                }
            }
        }
        return v;
    }
};