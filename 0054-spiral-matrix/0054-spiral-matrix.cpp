class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int top=0; 
        int bottom=matrix.size()-1; 
        int left=0; 
        int right=matrix[0].size()-1;
        
        while(top <= bottom && left<= right){
            for(int x=left;x<=right;x++){
                v.push_back(matrix[top][x]);
            }
            top++;
            for(int x=top;x<=bottom;x++){
                v.push_back(matrix[x][right]);
            }
            right--;
            if(top <=bottom){
                for(int x=right;x>=left;x--){
                    v.push_back(matrix[bottom][x]);
                }
            bottom--;
            }
            if(left<=right){
                for(int x=bottom;x>=top;x--){
                    v.push_back(matrix[x][left]);
                }
                left++;
            }
        }
        return v;        
    }        
};