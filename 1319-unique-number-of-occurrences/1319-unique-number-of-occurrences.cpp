class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> sol;
        int size= arr.size();
        sort(arr.begin(),arr.end());
        int i =0;
        while(i<size){
            int count=1;
            for(int j=i+1; j<size; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            sol.push_back(count);
            i=i+count;
        }

        size= sol.size();
        sort(sol.begin(),sol.end());
        for(int k=0;k<size-1;k++){
            if(sol[k]==sol[k+1]){
                return false;
            }
        }
        return true;
    }
};