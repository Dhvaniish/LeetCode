import java.util.HashSet;

class Solution {
    public int longestPalindrome(String s) {
        int n = s.length();
        HashSet<Character> st = new HashSet<>();

        int result = 0;

        for (char ch : s.toCharArray()) {
            if (st.contains(ch)) {
                result += 2;
                st.remove(ch);
            } else {
                st.add(ch);
            }
        }

        if (!st.isEmpty()) {
            result++;
        }

        return result;
    }
}
