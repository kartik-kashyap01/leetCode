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
    ListNode* r(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    ListNode* last = temp->next;

    last->next = head;
    temp->next = nullptr;

    return last;
}
    ListNode* rotateRight(ListNode* head, int k) {
        int c=0 ;
        ListNode* t= head;
        if(k==0 || head == nullptr){
            return head;
        }
        while(t!=nullptr){
            c++;
            t=t->next;
        }

    int tu = k%c;

     for(long long i=0 ; i<tu; i++){
       head= r(head);
     }   
     return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna