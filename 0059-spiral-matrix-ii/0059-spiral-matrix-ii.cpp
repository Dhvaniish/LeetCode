class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n,1));
        int top=0, left=0, index=1; 
        int bottom=n-1;
        int right=n-1;
        
        while(top <= bottom && left<= right){
            for(int x=left;x<=right;x++){
                ans[top][x] = index;
                index++;
            }
            top++;
            for(int x=top;x<=bottom;x++){
                ans[x][right] = index;
                index++;
            }
            right--;
            if(top <=bottom){
                for(int x=right;x>=left;x--){
                    ans[bottom][x] = index;
                    index++;
                }
            bottom--;
            }
            if(left<=right){
                for(int x=bottom;x>=top;x--){
                    ans[x][left] = index;
                    index++;
                }
                left++;
            }
        }
        return ans;        
    }
};