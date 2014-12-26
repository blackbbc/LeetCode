class Solution {
public:
    int uniquePaths(int m, int n) {
        int f[m+1][n+1];
        int i,j;
        for (i=0;i<=m;i++)
            for (j=0;j<=n;j++)
                f[i][j]=0;
        f[0][1]=1;
        for (i=1;i<=m;i++)
            for (j=1;j<=n;j++)
                f[i][j]=f[i-1][j]+f[i][j-1];
        return f[m][n];
    }
};
