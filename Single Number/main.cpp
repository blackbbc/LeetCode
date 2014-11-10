/*
*本题考查异或的知识 
*
*
*/

class Solution {
public:
    int singleNumber(int A[], int n) {
        int x=0;
        for (int i=0;i<n;i++)
            x=x^A[i];
        return x;
    }
};
