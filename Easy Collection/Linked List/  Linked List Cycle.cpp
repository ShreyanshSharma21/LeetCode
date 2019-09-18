//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/773/

/*
Given a linked list, determine if it has a cycle in it.
*/

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
    bool hasCycle(ListNode *head) {
        set<ListNode*>s;
        
        while(head!=NULL){
            if(s.find(head)!=s.end()){
                return true;
            }
            s.insert(head);
            head = head->next;
        }
        return false;
    }
};