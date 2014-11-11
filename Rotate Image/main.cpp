class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int i,j,n;
        vector<vector<int> > temp;
        temp=matrix;
        
        n=matrix[0].size();
        
        for (i=0;i<n;i++)
            for (j=0;j<n;j++)
                matrix[j][n-i-1]=temp[i][j];
        
    }
};


