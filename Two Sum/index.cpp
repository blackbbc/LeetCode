/**
**Õ∞≈≈–Ú
*/ 

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i,j,n;
        vector<int> ans;
        int hash[1000000];
        
        for (i=0;i<1000000;i++)
            hash[i]=-1;
        
        n=numbers.size();
        
        for (i=0;i<n;i++)
            hash[numbers[i]]=i;
            
        for (i=0;i<n;i++)
            if (target-numbers[i]>=0)
                if (hash[target-numbers[i]]>0)
                {
                    ans.push_back(i+1);
                    ans.push_back(hash[target-numbers[i]]+1);
                    return ans;
                }
        
    }
};
