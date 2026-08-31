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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int i=0 ;
        int j=0;
        int k=0;
        int f=INT_MAX;
        int il=0;
        int fc=0;
        int lc=0;
        vector<int> result={-1,-1};
        while( head != NULL ){
            i=j;
            j=k;
            k= head->val;


            if((i!=0 && j!=0 && k!=0 )&&((i<j &&  j>k) || (i>j && j<k))){
                if(fc==0){
                    fc=il;
                }
                else{
                    f= min(f,il-lc);
                    result={ f, il-fc};
                }
                lc=il;
            }
            il++;
            head=head->next;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna