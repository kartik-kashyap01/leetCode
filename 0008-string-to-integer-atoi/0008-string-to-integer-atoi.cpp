#include <string>
class Solution {
public:
    int myAtoi(string s) {
       if(s.size()==0)return 0;
        int sign = +1;
       int i=0;
       while(i<s.size() && s[i]==' '){
        i++;
       }
       if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.size() && s[i] == '+') {
            i++;
        }
       s= s.substr(i);
        if (s.size() == 0)
            return 0;
       long long ans=0;
       i=0;
        
       while(i<s.length()){
        if(!isdigit(s[i]))break;
        int dig= s[i]-'0';
        ans=ans*10+dig;
                    if (sign == -1 && -ans < INT_MIN)
                return INT_MIN;

            if (sign == 1 && ans > INT_MAX)
                return INT_MAX;

            i++;
       }

       return (int)(sign*ans);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna