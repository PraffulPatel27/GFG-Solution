//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool isPossible(int x, int y, int n, vector<vector<int>>&matrix) {
    if ((x>=0 && x<n) && (y>=0 && y<n) && (matrix[x][y]>0 || (x==n-1 && y==n-1)))
        return true;
            
    return false;
}
    void solve(vector<vector<int>>&matrix, int n, int x, int y, vector<vector<int>> &ans ) {
        if(x==n-1 && y==n-1) {
            // Answer found
            ans[x][y]=1;
            return ;
        }
        for(int i=0; i<matrix[x][y]; i++) {
            // Right
            int newx = x;
            int newy = y+i+1;
            
            if (isPossible (newx, newy, n, matrix)) {
                solve(matrix, n, newx, newy, ans);
                if(ans[newx][newy] == 1) {
                    ans[x][y]=1;
                    break;
                }
            }
            
            // Down
            newx = x+i+1;
            newy = y;
            if (isPossible (newx, newy, n, matrix)) {
                solve (matrix, n, newx, newy, ans);
                if(ans[newx][newy] == 1) {
                    ans[x][y]=1;
                    break;
                }
            }
        }
    }
public:
    vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
       // Code here
       int x=0;
       int y=0;
       int n = matrix.size();
       vector<vector<int>> ans=matrix;
       
       for(int i=0; i<n; i++) {
           for(int j=0; j<n; j++) {
                ans[i][j]=0;
           }
       }
       
       solve (matrix, n, x, y, ans);
       if (ans[n-1][n-1] == 0) {
           vector<vector<int>> ans1(1 ,vector<int>(1,0));
            ans1[0][0]=-1;
            return ans1;
       }
       
       return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends