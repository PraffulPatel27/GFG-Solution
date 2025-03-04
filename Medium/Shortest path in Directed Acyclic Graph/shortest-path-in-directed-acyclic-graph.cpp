//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges){
        vector<pair<int,int>> adj[n];
        for(auto it: edges){
            adj[it[0]].push_back({it[1], it[2]});
        }
        
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<int> dist(n, 1e9);
        dist[0] = 0;
        
        while(!q.empty()){
            int node = q.front().first;
            int edw = q.front().second;
            q.pop();
            
            for(auto it: adj[node]){
                int adjNode = it.first;
                int d = it.second;
                
                if(dist[node]+d < dist[adjNode]){
                    q.push({adjNode, dist[node]+d});
                    dist[adjNode] = dist[node]+d;
                }
            }
        }
        for(int i=0;i<dist.size();i++){
            if(dist[i]==1e9)dist[i] = -1;
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends