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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA!=NULL){
           ListNode *tempB=headB;
            while(tempB!=NULL){
                if(headA==tempB){
                    return headA;
                }
                tempB=tempB->next;
            }
            headA=headA->next;
        }
        if(headA==NULL)
            return NULL;
        else
            return headA;
    }
};
