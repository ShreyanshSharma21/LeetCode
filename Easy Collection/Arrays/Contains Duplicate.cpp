//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

/*
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto x:nums){
            if(s.find(x)==s.end()){
                s.insert(x);
            }else{
                return true;
            }
        }
        return false;
    }
};