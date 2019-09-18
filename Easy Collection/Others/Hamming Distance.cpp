//https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/762/

/*
The Hamming distance between two integers is the number of positions at which the 
corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
*/


class Solution {
public:
    int hammingDistance(int x, int y) {
        int xx=x^y;
        int setBit=0;
        while(xx>0){
            setBit+=(x&1);
            xx=xx>>1;
        }
        return setBit-1;
    }
};