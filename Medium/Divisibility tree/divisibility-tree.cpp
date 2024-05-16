//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
 int f(int node , vector<vector<int>> &adjList, vector<int> &vis, int &cnt)
    {
        
        vis[node] = 1;
        
        int sum = 1;
        
        for(auto adjNode:adjList[node])
        {
            if(!vis[adjNode])
            {
                sum += f(adjNode, adjList, vis, cnt);
            }
        }
        if(node != 1 && sum % 2 == 0)
        {
            cnt++;
        }
        // cout <<node <<"  "<<sum<<endl;
        return sum;
    }
public:
    int minimumEdgeRemove(int n, vector<vector<int>>edges){
       vector<vector<int>> adjList(n+1,vector<int>());
       
       for(auto it:edges)
       {
           adjList[it[0]].push_back(it[1]);
           adjList[it[1]].push_back(it[0]);
       }
       
       int cnt = 0;
       vector<int> vis(n+1, 0);
       f(1, adjList, vis, cnt);
       
       return cnt;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends