#include <bits/stdc++.h>
using namespace std;
/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// (head->next != nullptr) is never evaluated if head == nullptr.
//, you must first check that head is not nullptr.

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    if(l1->val==0&& l2->val==0){
        ListNode* head=new  ListNode(0);
        return head;
    }
         int n1=0;
         int n2=0;
         ListNode* m1=l1;
         ListNode* m2=l2;
         int digit=0;
         int pow=1;

         while(m1!=nullptr){
            digit=m1->val;
            n1=digit*pow+n1;
            pow=pow*10;
            m1=m1->next; // REMEMBER TO ITERATE IN WHILE LOOP
         }
         pow=1;
         digit=0;

         while(m2!=nullptr){
            digit=m2->val;
            n2=digit*pow+n2;
            pow=pow*10;
            m2=m2->next; // REMEMBER TO ITERATE IN WHILE LOOP
         }

        

        
         int sum= n1+n2;
         

         digit=sum%10;
         sum=sum/10;
        

         ListNode* head= new ListNode(digit);
         ListNode* mover=head;

         pow=1;
         digit=0;
         while(sum!=0){
            

            digit=sum%10;
            sum=sum/10;
            ListNode*temp=new ListNode(digit);
            mover->next=temp;
            mover=mover->next;
         }
         



        
return head;}

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

  
    ListNode* head = addTwoNumbers(head1,head2);

    printList(head);

    return 0;
}
