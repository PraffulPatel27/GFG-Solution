//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
         int n2= arr[0].size();
        vector<int> s(1);
        int column= -1;
        
        for (int col=0; col<n2; col++) {
            int zero=0;
            for (int row=0; row<N; row++) {
                if (arr[row][col] == 0)
                   zero++;
            }
            
            if (zero>s[0] && find(s.begin(), s.end(), zero)==s.end()) {
                s[0]= zero;
                column= col;
            }
        }
        
        if (s[0] == 0)
          return -1;
        
        return column;
        
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends