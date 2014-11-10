/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	
    int maxDepth(TreeNode *root) {
    	
    	int ans;
		ans=dfs(1,root);
    }
    
    int maxn(int a,int b) {
    	return a>b?a:b;
    }
    
    int dfs(int floor,TreeNode *p) {
    	
    	if (p==NULL)
    		return 0;
    	
    	int temp=floor;
    	temp=maxn(temp,dfs(floor+1,p->left));
    	temp=maxn(temp,dfs(floor+1,p->right));
    	
    	return temp;
    	
    }
    
    
};
