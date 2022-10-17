class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> check;
        
        for(auto X: sentence) check.insert(X);
        
        return check.size() == 26 ? true : false;
    }
};
