class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        int a = (log(n)/log(4)); 
        /*
            4^a = n
            a = log(n) to base 4
            a = log(n) to base e / log(4) to base e
        */
        if(n == pow(4, a))
            return true;
        return false;
    }
};