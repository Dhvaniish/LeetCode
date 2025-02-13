class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        string result = "";
        int partLen = part.length();

        for (char c : s) {
            result.push_back(c);
            // If the last characters match "part", remove them
            if (result.size() >= partLen && result.substr(result.size() - partLen) == part) {
                result.erase(result.size() - partLen);
            }
        }
        
        return result;
    }
};
