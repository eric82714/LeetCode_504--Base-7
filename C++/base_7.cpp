class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        
        string result = "";
        int n = abs(num);
        
        while(n > 0) {
            result = to_string(n % 7) + result;
            n /= 7;
        }
        
        if(num < 0) result = "-" + result;
            
        return result;
        
    }
};
