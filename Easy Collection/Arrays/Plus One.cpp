//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/

/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size(); i--; digits[i] = 0)
        if (digits[i]++ < 9)
            return digits;
        digits[0]++;
        digits.push_back(0);
        return digits;
        
    }
};