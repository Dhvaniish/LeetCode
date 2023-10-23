class Solution {
public:
    bool isPowerOfFour(int n) {
      /*
          num & (num - 1) == 0 : This checks if the number is a power of 2.
          (n - 1) % 3          : All numbers that are powers of 4 have this property. For example, 4^1 - 1 = 3, 4^2 - 1 = 15, 4^3 - 1 = 63, and so on.
          Maths proff of (n-1)%3 
          Consider three consecutive numbers: n, n+1, and n+2, where n is any integer. If n is a multiple of 3, then it is itself divisible by 3. 
          If n is one more than a multiple of 3, i.e., n=3k+1 for some integer k, 
          then n+2 = 3k+3 = 3(k+1) is a multiple of 3. 
          If n is two more than a multiple of 3, i.e., n=3k+2 for some integer kk, 
          then n+1 = 3k+3 = 3(k+1) is a multiple of 3.
      */
        return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
    }
};