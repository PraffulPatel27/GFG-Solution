//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here
          int maxir=INT_MIN,maxic=INT_MIN;
        vector<int>rsum;
        vector<int>csum;
        for(int i=0;i<n;i++){
            int r=0,c=0;
            for(int j=0;j<n;j++){
                r+=matrix[i][j];
                c+=matrix[j][i];
            }
            maxir=max(maxir,r);
            maxic=max(maxic,c);
            rsum.push_back(r);
            csum.push_back(c);
        }
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
           ans1+=(maxir-rsum[i]); 
           ans2+=maxic-csum[i];
        }
        return max(ans1,ans2);
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends