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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> vec;
        while(list1!=nullptr){
            vec.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=nullptr){
            vec.push_back(list2->val);
            list2=list2->next;
        }
        ListNode*dummy= new ListNode(-1);
        ListNode*curr=dummy;

        sort(vec.begin(),vec.end());

        for(int i=0; i<vec.size(); i++){
            curr->next=new ListNode(vec[i]);
            curr=curr->next;
        }

        return dummy->next;
    }
};