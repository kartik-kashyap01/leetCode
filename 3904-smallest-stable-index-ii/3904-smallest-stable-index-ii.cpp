class Solution {
public:
  int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        if(nums.size()==1){
            return 0;
        }
        vector<int> minidx(nums.size());
        int minel=INT_MAX;
        for(int i=n-1; i>=0;i--){
            minel=min(minel,nums[i]);
                minidx[i]=minel;
            
        }
        int maxel= INT_MIN;
        for(int i=0 ; i<nums.size(); i++){
         maxel=max(maxel,nums[i]);


            if((maxel-minidx[i])<=k){
                return i;
            }
           
        }
        return -1;
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna