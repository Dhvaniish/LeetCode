class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x>=INT_MAX))
            return false;
        long int num = 0;
        int y = x;
        while(x>0){
            if (num > INT_MAX/10)
                return false;
            num = num * 10;
            num = num + (x%10);
            x = x/10;
        }
        if (num == y)
            return true;
        else
            return false;
    }
};