class Solution {
 public:
  bool judgeSquareSum(int c) {
    unsigned int l = 0;
    unsigned int r = sqrt(c);

    while (l <= r) {
      unsigned int sum = l * l + r * r;
      if (sum == c)
        return true;
      if (sum < c)
        ++l;
      else
        --r;
    }

    return false;
  }
};