//https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/648/

/*
Reverse bits of a given 32 bits unsigned integer.
*/


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int pos=31;
        int res=0;
        while(n!=0){
            if(n&1)
                res |=(1<<pos);
            pos--;
            n=n>>1;            
        }
        return res;
    }
};