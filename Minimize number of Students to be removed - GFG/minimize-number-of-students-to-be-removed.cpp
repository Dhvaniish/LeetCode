//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        vector<int> updated;
        
        for(int i=0; i<N; i++){
            int j =0;
            while(j < updated.size() && updated[j]<H[i])
            j++;
            
            if(j == updated.size())
            updated.push_back(H[i]);
            else
            updated[j] = H[i];
        }
        return N-updated.size();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends