//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int i = 0,j = 0;
 		vector<vector<int>> vis(n,vector<int>(m,0));
 		while(i<n &&j<m){
 		    while(j<m && !vis[i][j])
 		    {
 		        vis[i][j]=1;
 		        k -=1;
 		        if(k==0)return a[i][j];
 		        j+=1;
 		    }
 		    j-=1;
 		    i+=1;
 		    while(i<n && !vis[i][j]){
 		        vis[i][j] = 1;
 		        k-=1;
 		        if(k==0)return a[i][j];
 		        i+=1;
 		    }
 		    i-=1;
 		    j-=1;
 		    while(j>=0 && !vis[i][j]){
 		        vis[i][j] = 1;
 		        k-=1;
 		        if(k==0)return a[i][j];
 		        j-=1;
 		    }
 		    j+=1;
 		    i-=1;
 		    while(i>=0 && !vis[i][j]){
 		        vis[i][j] = 1;
 		        k-=1;
 		        if(k==0)return a[i][j];
 		        i-=1;
 		    }
 		    i+=1;
 		    j+=1;
 		}
 		return a[i][j];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends