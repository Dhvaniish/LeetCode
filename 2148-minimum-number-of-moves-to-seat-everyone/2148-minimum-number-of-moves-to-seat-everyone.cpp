class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        for(int i=0; i<seats.size(); i++){
            int x = 0;
            x = seats[i] - students[i];
            ans += abs(x);
        }
        return ans;
    }
};