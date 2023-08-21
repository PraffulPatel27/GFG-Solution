//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
         int result = 0;
        for(int i = 0; i< matrix.size(); i++){
            
            for(int j = 0; j < matrix[i].size();j++){
                int count = 0;
                if(matrix[i][j] == 1){
                    // Directions
                    int top= -1,bottom= -1,left = -1,right = -1;
                    // Diagonals
                    int tleft= -1, tright= -1,bleft= -1, bright= -1;
                    
                    if(i-1 >= 0){
                        top = matrix[i-1][j];
                        if(top == 0){
                            count++;
                        }
                        if(j-1 >= 0){
                            tleft = matrix[i-1][j-1];
                            if(tleft == 0) count++;
                        }
                        if(j+1< matrix[i].size()){
                            tright = matrix[i-1][j+1];
                            if(tright == 0) count++;
                        }
                    }
                    
                    if(j+1 < matrix[i].size()){
                        right = matrix[i][j+1];
                        if(right == 0) count++;
                    }
                    
                    if(j-1 > -1){
                        left = matrix[i][j-1];
                        if(left == 0) count++;
                    }
                    
                    
                    
                    if(i+1 < matrix.size()){
                        bottom = matrix[i+1][j];
                        if(bottom == 0)count++;
                        if(j-1 > -1) {
                            bleft = matrix[i+1][j-1];
                            if(bleft == 0)count++;
                        }
                        if(j+1 < matrix[i].size())  {
                            bright = matrix[i+1][j+1];
                            if(bright == 0) count++;
                        }
                    }
                    if(count %  2 == 0 && count > 0){
                        result++;
                    }
                    
               
                }
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends