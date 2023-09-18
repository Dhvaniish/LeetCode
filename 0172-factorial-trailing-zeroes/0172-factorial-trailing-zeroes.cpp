class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        if(n<5)
            return 0;
        for(int i=0; i<n; i++){
            count += n/5;
            n/=5;
        }
        return count;
    }
};