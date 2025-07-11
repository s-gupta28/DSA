/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*dummyN=new ListNode(-1);
        ListNode*mover=head;
        ListNode*newTemp=dummyN;
        while(mover!=nullptr){
            if(mover->val!=val){
                ListNode*temp=new ListNode(mover->val);
                newTemp->next=temp;
                newTemp=newTemp->next;
            }
            mover=mover->next;
        }
    return dummyN->next;
    }
};