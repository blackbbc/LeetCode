class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n,m,i,j;
        n=matrix.size();
        m=matrix[0].size();
        
        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
                if (matrix[i][j]==target)
                    return true;
    }
};
