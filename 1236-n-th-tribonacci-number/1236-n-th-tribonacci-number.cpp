class Solution {
public:
    int tribonacci(int n) {
        int s[n+1];
        if (n==0){
            return 0;
        }
        else if (n==1){
            return 1;
        }
        s[0]=0;
        s[1]=1;
        s[2]=1;
        for(int i=3;i<=n;i++){
            s[i]=s[i-1]+s[i-2]+s[i-3];
        }
        int ans= s[n];
        return ans;
        }
};