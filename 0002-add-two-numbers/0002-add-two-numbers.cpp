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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* temp1= l1;
     ListNode* temp2= l2;
   ListNode* ans = nullptr;
        ListNode* tail = nullptr;
   
     int r=0 ;
     while(temp1!=nullptr || temp2!= nullptr){
         int a = (temp1 != nullptr) ? temp1->val : 0;
            int b = (temp2 != nullptr) ? temp2->val : 0;
     
        int c= (a+b+r)%10;
        r= (a+b+r)/10;
        
         ListNode* node = new ListNode(c);
        if (ans == nullptr) {
                ans = node;
                tail = node;
            }
        else {
                tail->next = node;
                tail = node;
            }

        if (temp1 != nullptr)
                temp1 = temp1->next;

        if (temp2 != nullptr)
                temp2 = temp2->next;
        



     }  

if (r != 0) {
            tail->next = new ListNode(r);
        }

     

        return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna