//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
       vector<vector<long long> > idenmat(){
        vector<vector<long long> > mat(3,vector<long long> (3,0));
        mat[0][0]=1;
        mat[1][1]=1;
        mat[2][2]=1;
        return mat;
    }
    
    vector<vector<long long> > mul(vector<vector<long long > > mat1,vector<vector<long long > > mat2,long long &m){
       
       long long n1=mat1.size();
       long long m1=mat1[0].size();
       long long n2=mat2.size();
       long long m2=mat2[0].size();
       
       vector<vector<long long> > ans(n1,vector<long long> (m2,0));
       
       for(long long i=0;i<n1;i++){
           for(long long j=0;j<n1;j++){
               long long temp=0;
               for(long long k=0;k<m1;k++){
                   temp=(temp+((mat1[i][k]%m)*(mat2[k][j]%m))%m)%m;
               }
               ans[i][j]=temp;
           }
       }
       
       return ans;
       
        
    }
    
    
    vector<vector<long long> > matpow(vector<vector<long long > > &basemat,long long p,long long &m){
        if(p==0){
            return idenmat();
        }
        
        
        vector<vector<long long> > mat=matpow(basemat,p/2,m);
        mat=mul(mat,mat,m);
        
        if(p&1){ //odd
            mat=mul(mat,basemat,m);
        }
        return mat;
        
    }
    
    long long solve(long long &a, long long &b, long long &c, long long &n, long long &m){
        
        //base matrix
        vector<vector<long long> > basemat(3,vector<long long> (3,0));
        basemat[0][0]=a;
        basemat[0][1]=b;
        basemat[0][2]=1;
        basemat[1][0]=1;
        basemat[2][2]=1;
        
        
        vector<vector<long long> > powmatrix=matpow(basemat,n-2,m);
        
        
        vector<vector<long long> > initialval(3,vector<long long> (1,0));
        initialval[0][0]=1;
        initialval[1][0]=1;
        initialval[2][0]=c;
        
        powmatrix= mul(powmatrix,initialval,m);
        return powmatrix[0][0];
        
    }
    
    
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        if(n==1 || n==2){
            return 1;
        }
        
        return solve(a,b,c,n,m);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,n,m;
        
        cin>>a>>b>>c>>n>>m;

        Solution ob;
        cout << ob.genFibNum(a,b,c,n,m) << endl;
    }
    return 0;
}
// } Driver Code Ends