//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int f = 0,l = 0;
        vector<int> ans(2,-1);
        int flag = 0;
        for(int i = 0;i<n;i++){
            if(flag == 0 and arr[i]==x){
                ans[0] = i;
                flag = 1;
            }
            if(flag == 1 and arr[i]==x){
                ans[1] = i;
            }
        }
        if(ans[0]!=-1 and ans[1]==-1) ans[1] = ans[0];
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends