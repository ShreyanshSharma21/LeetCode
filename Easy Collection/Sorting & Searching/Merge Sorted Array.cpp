//https://leetcode.com/explore/interview/card/top-interview-questions-easy/96/sorting-and-searching/587/

/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold 
additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
*/
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        // int mn=min(m,n);
        vector<int> ans;
        int i=0,j=0;
        while(i<m && j<n){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }else{
                ans.push_back(b[j]);
                j++;
            }
        }
        for(int id=i;id<m;id++){
            ans.push_back(a[id]);
        }
        for(int id=j;id<n;id++){
            ans.push_back(b[id]);
        }
        for(int i=0;i<m+n;i++){
            a[i]=ans[i];
        }
    }
};