//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int row = matrix.size(); 
       int col = matrix[0].size();
       vector<vector<int>> ans = matrix;

       //Make row zero
       for (int i=0; i<row; i++)
       {
          for (int j=0; j<col; j++)
          {
             if (matrix[i][j] == 1)
             {
                for (int l=0; l<col; l++)
                {
                    ans[i][l] = 1;
                }
             }
          }
       }

       //Make column zero
       for (int i=0; i<row; i++)
       {
          for (int j=0; j<col; j++)
          {
             if (matrix[i][j] == 1)
             {
                for (int l=0; l<row; l++)
                {
                    ans[l][j] = 1;
                }
             }
          }
       }

       //Print matrix
        matrix = ans;
    //   for (auto first : matrix)
    //   {
    //       for (auto second : first)
    //       {
    //          cout << second << " ";
    //       }
    //   }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends