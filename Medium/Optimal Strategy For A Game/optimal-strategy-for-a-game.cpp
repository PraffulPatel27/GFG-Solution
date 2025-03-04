//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
        int dp[1001][1001] ;
    int solve( int s , int e , bool f , int arr[] )
    {
        if( e < s )
        {
            return 0 ;
        }
        
        if( dp[s][e] != -1 ) return dp[s][e] ;
        
        int ans = 0 ;
        
        if(f)
        {
            ans =  max( arr[s] + solve( s+1 , e , false , arr ) , arr[e] + solve( s , e-1 , false , arr ) ) ;
        }
        else{
            ans =  min( solve( s+1 , e , true , arr ) , solve( s , e-1 , true , arr ) ) ;
        }
        
        return  dp[s][e] =  ans ;
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        memset( dp , -1 , sizeof(dp) ) ;
        return solve( 0 , n-1 , true , arr ) ;
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
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends