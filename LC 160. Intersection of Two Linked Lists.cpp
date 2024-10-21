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
        // two pointer approach 
        
        // Explanation why we are switching node after a pointer reach the tail:
        // The reason this works is that by switching the heads when 
        // the pointer reaches the end of a list, both pointers effectively 
        // traverse the same total distance (i.e., the length of headA + headB), 
        // ensuring that they either meet at the intersection node or both hit the 
        // end of their respective lists (NULL) at the same time.

        ListNode* ptrA=headA;
        ListNode* ptrB=headB;
        while(ptrA!=ptrB){
            if(ptrA==NULL){
                ptrA=headB;
            }
            else{
                ptrA=ptrA->next;
            }
            if(ptrB==NULL){
                ptrB=headA;
            }
            else{
                ptrB=ptrB->next;
            }
        }
        return ptrA;
    }
};
