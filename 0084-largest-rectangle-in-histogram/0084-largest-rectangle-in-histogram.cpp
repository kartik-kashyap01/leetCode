class Solution {
public:


   

    int largestRectangleArea(vector<int>& heights) {
        int max_area=0;
        stack<int> s;
        int h = heights.size();
        vector<int> rs(h,h);
        vector<int> ls(h,-1);
        

        for(int i =h-1;i>=0;i--){
            while( !s.empty() && heights[i]<=heights[s.top() ]){
                s.pop();
            }
            if(!s.empty()){
                 rs[i]=s.top();
            }
           s.push(i);
        }

         while(!s.empty()){
                s.pop();
            }

         for(int i =0;i<h;i++){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                 ls[i]=s.top();
            }
           s.push(i);
        }
        
        for(int i=0 ;heights.size()>i;i++){
            int width = rs[i]-ls[i] -1 ;
            int area =heights[i]*width;
            max_area= max(max_area,area);

        }
        return max_area;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna