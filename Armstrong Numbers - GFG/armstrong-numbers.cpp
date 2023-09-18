//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int temp=0, sum=0;
        int m=n;
        while(n!=0){
            temp = n%10;
            sum += temp*temp*temp;
            n = n/10;
        }
        if(m == sum){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends