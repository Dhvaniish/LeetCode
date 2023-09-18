//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector <int> pos;
	    vector <int> neg;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0)
	            pos.push_back(arr[i]);
	        else
	            neg.push_back(arr[i]);
	    }
	    
	    int pair = min(pos.size(), neg.size());
	    
	    vector <int> v;
	    
	    int count=0;
	    
	    while(count<pair){
	        v.push_back(pos[count]);
	        v.push_back(neg[count]);
	        count++;
	    }
	    
	    while(count<pos.size()){
	        v.push_back(pos[count]);
	        count++;
	    }
	    
	    while(count<neg.size()){
	        v.push_back(neg[count]);
	        count++;
	    }
	    
	    for(int i=0; i<n; i++){
	        arr[i] = v[i];
	    }
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends