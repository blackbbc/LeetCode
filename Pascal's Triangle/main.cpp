class Solution {
public:
vector<vector<int> > generate(int numRows)
{
	int i,j;
	
	vector<int> *p;
	vector<vector<int> >ans;
	
	if (numRows>0)
	{
		p=new vector<int>();
		p->push_back(1);
		ans.push_back(*p);
	}
	
	for (i=1;i<=numRows-1;i++)
	{
		p=new vector<int>();
		
		p->push_back(1);
		
		for (j=1;j<=i-1;j++)
			p->push_back(ans[i-1][j-1]+ans[i-1][j]);
		
		p->push_back(1);
		
		ans.push_back(*p);
	}
	
	return ans;
}
};
