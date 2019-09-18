//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/772/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode* curr=head;
        while(curr!=NULL){
            s.push(curr->val);
            curr=curr->next;
        }
        while(head!=NULL){
            if(s.top()!=head->val){
                return false;
            }
            s.pop();
            head=head->next;
        }
        return true;
    }
};