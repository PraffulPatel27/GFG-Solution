//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int n=mat.size(),m=mat[0].size();
         map<int,vector<int>> mp;
         
         for (int i=0; i<n; i++) {
             for (int j=0; j<m; j++) {
                 mp[i+j].push_back(mat[i][j]);
             }
         }
         
         vector<int> ans;
         for (auto it: mp) {
             if (it.first%2 != 0) {
                 for(auto num:it.second) ans.push_back(num);
             }
             else{
                 reverse (it.second.begin(),it.second.end());
                 for (auto num: it.second) 
                    ans.push_back(num);
             }
         }
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends