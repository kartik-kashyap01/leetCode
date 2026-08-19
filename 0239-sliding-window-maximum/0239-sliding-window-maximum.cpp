class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> deq;
        int n = nums.size();
        vector<int> ans;
        // first window

        for(int i =0; i<k;i++){
            while(deq.size()>0 && nums[deq.back()]<= nums[i] ){
                deq.pop_back();
            }
            deq.push_back(i);
        }
        for(int i=k;n>i;i++){
            ans.push_back(nums[deq.front()]);
            //
             while(deq.size()>0 && deq.front()<= i-k ){
                deq.pop_front();
             }

                while(deq.size()>0 && nums[deq.back()]<= nums[i] ){
                deq.pop_back();
            }
            deq.push_back(i);


        }
        ans.push_back(nums[deq.front()]);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna