class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0;
        
        for(int i = 0; i < chars.size(); i++) {
            char x = chars[i];
            int c = 0;
            
            while(i < chars.size() && chars[i] == x) {
                c++;
                i++;
            }
            i--;
            
            chars[count] = x;
            count++;
            
            if(c > 1) {
                string num = "";
                while(c > 0) {
                    num += c%10 + '0';
                    c /= 10;
                }
                
                for(int i = num.size()-1; i >= 0; i--) {
                    chars[count] = num[i];
                    count++;
                }
            }
            
            c = 0;
        }
        
        return count;
    }
};
