//https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/721/


/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if 
the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
*/

class Solution {
public:
    bool isValid(string s) {
        bool flag=true;
        vector<char> v;
        for(auto x:s){
            if(x=='{'||x=='['||x=='('){
                v.push_back(x);
            }
            if(v.size()==0){
                flag=false;
                break;
            }
            if(x==')'){
                if(v.back()=='('){
                    v.pop_back();
                }else{
                    flag=false;
                    break;
                }
            }
            if(x=='}'){
                if(v.back()=='{'){
                    v.pop_back();
                }else{
                    flag=false;
                    break;
                }
            }
            if(x==']'){
                if(v.back()=='['){
                    v.pop_back();
                }else{
                    flag=false;
                    break;
                }
            }            
        }
        if(v.size()!=0)
                flag=false;
        return flag;
    }
};