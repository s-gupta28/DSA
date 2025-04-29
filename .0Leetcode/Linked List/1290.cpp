#include <bits/stdc++.h>
using namespace std;

/*
Given head which is a reference node to a singly-linked list. 
The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
The most significant bit is at the head of the linked list.
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Logic remains the same
// int getDecimalValue(ListNode* head) {
//     vector<int> temp;
//     ListNode* mover = head;

//     while (mover) {
//         temp.push_back(mover->val);
//         mover = mover->next;
//     }

//     int ans = 0;
//     int n = temp.size();

//     for (int i = 0; i < n; i++) {
//         int size = n - i - 1;
//         ans = ans + (temp[size] * pow(2, i));
//     }

//     return ans;
// }

// vec2LL logic kept the same, just renamed `node` to `ListNode`
ListNode* vec2LL(const vector<int>& vec) {
    if (vec.empty()) {
        return nullptr;
    }

    ListNode* head = new ListNode(vec[0]);
    ListNode* mover = head;
    ListNode* temp = nullptr;

    for (int i = 1; i < vec.size(); i++) {
        temp = new ListNode(vec[i]); // creating new node
        mover->next = temp;
        mover = mover->next;
    }

    return head;
}
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}


int getDecimalValue(ListNode* head) {
    ListNode*mover= head;
    int ans=0;
    while(mover){
        ans=ans*2+mover->val; //  ans=ans*10+digit
        mover=mover->next;

    }

   return ans   ;  
}
int main() {
    vector<int> binaryVec = {1, 0, 1};
    ListNode* head = vec2LL(binaryVec);

    printList(head);

    int decimalValue = getDecimalValue(head);
    cout << "Decimal Value: " << decimalValue << endl;

    return 0;
}
