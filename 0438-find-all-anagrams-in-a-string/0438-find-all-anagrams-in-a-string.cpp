class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>phash(26,0);
        vector<int>shash(26,0);
        int slen=s.length();
        int plen=p.length();
        if(slen<plen)
        return {};
        for(int i=0;i<plen;i++)
        {
            phash[p[i]-'a']++;
             shash[s[i]-'a']++;
        }
        if(phash==shash)
        ans.push_back(0);
        for(int i=plen;i<slen;i++)
        {
            shash[s[i]-'a']++;
            shash[s[i-plen]-'a']--;
            if(phash==shash)
            ans.push_back(i+1-plen);
        }
        return ans;
    }
};