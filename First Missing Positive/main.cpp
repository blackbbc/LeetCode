class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        
        
        int i,j;
        int v[10000];
        for (i=0;i<10000;i++)
            v[i]=0;
        v[0]=1;
        for (i=0;i<n;i++)
            if (A[i]>=0)
                v[A[i]]=1;
        for (i=0;i<10000;i++)
            if (v[i]>0&&v[i+1]==0)
                return i+1;
                
    }
};
