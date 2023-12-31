class Solution {
public:
   int strStr(string h, string n) {
        if(n.size()>h.size())
            return -1;
        int j=0;
        for(int i=0;i<h.size()-n.size()+1; i++){
            if(h[i]==n[j]){
                int l=i;
                while(j<n.size() && h[l]==n[j]){
                    j++;
                    l++;
                }
                if(j==n.size()){
                    return i;
                }
            }      
            j=0;
        }
        return -1;
    }
};