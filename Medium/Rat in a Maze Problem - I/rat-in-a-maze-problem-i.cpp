//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe (int i, int j, int row, int col,vector<vector<int>> &arr, vector<vector<bool>> &visited) {

    if (((i>=0 && i<row) && (j>=0 && j<col)) && (arr[i][j] == 1) && (visited[i][j] == false)) {
        return true;
    }

    return false;
}
void solveMaze (vector<vector<int>> &arr, int row, int col, int srcx, int srcy, vector<vector<bool>> &visited, vector<string> &path, string output) {

    // base case
    if (srcx == row-1 && srcy == col-1) {
        // Answer found
        path.push_back (output);
        return;
    }
    

    // Down -> i+1, j
    if (isSafe (srcx+1, srcy, row, col, arr, visited)) {
        visited[srcx+1][srcy] = true;
        solveMaze (arr, row, col, srcx+1, srcy, visited, path, output + 'D');
        visited[srcx+1][srcy] = false;
    }

    // Left -> i, j-1
    if (isSafe (srcx, srcy-1, row, col, arr, visited)) {
        visited[srcx][srcy-1] = true;
        solveMaze (arr, row, col, srcx, srcy-1, visited, path, output + 'L');
        visited[srcx][srcy-1] = false;
    }

    // Right -> i, j+1
    if (isSafe (srcx, srcy+1, row, col, arr, visited)) {
        visited[srcx][srcy+1] = true;
        solveMaze (arr, row, col, srcx, srcy+1, visited, path, output + 'R');
        visited[srcx][srcy+1] = false;
    }

    // Up -> i-1, j
    if (isSafe (srcx-1, srcy, row, col, arr, visited)) {
        visited[srcx-1][srcy] = true;
        solveMaze (arr, row, col, srcx-1, srcy, visited, path, output + 'U');
        visited[srcx-1][srcy] = false;
    }
}

    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int row = n;
        int col = n;
        
    vector<string> path;
    string output = "";
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    if (m[0][0] == 0) {
        return path;
    }
    visited[0][0] = true;

    solveMaze (m, row, col, 0, 0, visited, path, output);
    
    return path;
   }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends