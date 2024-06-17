//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool check(long long num1, long long num2){
        if(num1<=0 && num2>=0) return true;
        if(num1>=0 && num2<=0) return true;
        return false;
    }
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        long long diffy=q1[1]-p1[1];
        long long diffx=q1[0]-p1[0];
        long long num1=((p2[1]-p1[1])*1ll*diffx)-((p2[0]-p1[0])*1ll*diffy);
        long long num2=((q2[1]-p1[1])*1ll*diffx)-((q2[0]-p1[0])*1ll*diffy);
        long long diffy2=q2[1]-p2[1];
        long long diffx2=q2[0]-p2[0];
        long long num3=((p1[1]-p2[1])*1ll*diffx2)-((p1[0]-p2[0])*1ll*diffy2);
        long long num4=((q1[1]-p2[1])*1ll*diffx2)-((q1[0]-p2[0])*1ll*diffy2);
        if(check(num1,num2) && check(num3,num4)) return "true";
        return "false";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >> q2[1];
        // if (q2[1] == -2) {
        //     cout << "true" << endl;
        //     return 0;
        // }
        Solution ob;
        // int a = ob.doIntersect(p1, q1, p2, q2);
        // if (a)
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends