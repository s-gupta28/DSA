#include <bits/stdc++.h>
using namespace std;
/*You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode*ans=new ListNode();
    ListNode*mover1=list1;
    ListNode*mover2=list2;
    ListNode*mover3=ans;

    while(mover1!=nullptr && mover2!=nullptr){
        int value=min(mover1,mover2);   
        ListNode*temp=new ListNode();

        mover1=mover1->next;
        mover2=mover2->next;
    }
        
return ans;}





// Helper: Convert vector to linked list
ListNode* vec2LL(const vector<int>& vec) {
    if (vec.empty()) return nullptr;
    ListNode* head = new ListNode(vec[0]);
    ListNode* mover = head;
    for (int i = 1; i < vec.size(); ++i) {
        mover->next = new ListNode(vec[i]);
        mover = mover->next;
    }
    return head;
}

// Helper: Print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> input1 = {9,9,9,9,9,9,9};
    ListNode* head1 = vec2LL(input1);

    vector<int> input2 = {9,9,9,9};
    ListNode* head2 = vec2LL(input2);

    
    printList(head1);
    printList(head2);

  
    ListNode* head = mergeTwoLists(head1,head2);

    printList(head);

    return 0;
}
