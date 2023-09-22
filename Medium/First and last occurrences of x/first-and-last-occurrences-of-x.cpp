//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> ans;
        ans.push_back (-1);
        ans.push_back (-1);
        bool fs= false;
        
        for (int i=0; i<n; i++)
        {
            if (arr[i]==x && fs==false)
            {
                ans[0]= i;
                ans[1]= i;
                fs= true;
            }
            else if (arr[i]==x && fs==true)
            {
                ans[1]= i;
            }
        }
       
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