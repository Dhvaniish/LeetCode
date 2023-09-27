class Solution {
public:
    string decodeAtIndex(string s, int k) {
        vector<long> slen(s.size());
        slen[0]=1;
        int i=1;
        while(slen[i-1]<k){
            if(isalpha(s[i])){
                slen[i]=slen[i-1]+1;
            }else{
                slen[i]=(s[i]-'0')*slen[i-1];
            }
            i++;
        }
        i--;
        while(slen[i]>k){
            i--;
            if(slen[i]<k){
                k= ((k-1)%slen[i])+1;
            }
        }
        while(isdigit(s[i]))i--;
        return s.substr(i,1);
    }
};