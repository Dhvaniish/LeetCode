class Solution {
public:
    int isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return 1;
        return 0;
    }
    int maxVowels(string s, int k) {
        int maxvow=0,currvow=0;
        for(int i=0;i<s.length();i++){
            currvow+= isVowel(s[i]);
            if(i>=k){
                currvow-= isVowel(s[i-k]);
            }
            maxvow= max(maxvow, currvow);
        }
        return maxvow;
    }
};