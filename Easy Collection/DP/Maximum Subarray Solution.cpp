//https://leetcode.com/explore/interview/card/top-interview-questions-easy/97/dynamic-programming/566/

/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        bool flag=false;
        int neg=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>0){
                flag=true;
                break;
            }
            else if(a[i]>neg) neg=a[i];
        }
        if(flag==false){
            return neg;
        }
        int mx=0,sum=0;
        
        for(int i=0;i<n;i++){
            sum=max(0,sum+a[i]);
            mx=max(sum,mx);
        }
        return mx;        
    }
};