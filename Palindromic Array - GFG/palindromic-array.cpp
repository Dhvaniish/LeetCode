//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	int count = 0;
    	for (int i = 0; i < n; i++){
    	    int num = a[i];
    	    int s=0;
    	    while (num!= 0){
    	        int r = num%10;
    	        s = s*10 + r;
    	        num = num /10;
    	    }
    	    if (s==a[i]){
    	        count++;
    	    }
    	}
    	if (count == n){
    	    return 1;
    	}
    	return 0;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends