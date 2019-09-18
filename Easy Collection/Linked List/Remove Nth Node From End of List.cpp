//https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/603/

/*
Given a linked list, remove the n-th node from the end of list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        int cnt=0;
        ListNode* curr=head;
        ListNode* qq=head;
        while(curr!=NULL)
        {
            curr=curr->next;
            cnt++;
        }
        if(n>=cnt){
            head = head->next;
        }else{
        for(int i=0;i<cnt-n-1;i++){
            if(qq->next!=NULL)
            qq=qq->next;
        }
        }
        qq->next = qq->next->next;
        return head;
        
    }
};