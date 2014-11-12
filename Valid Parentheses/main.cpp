class Solution {
public:
bool isValid(string s) {
	stack<int> sta;
	char con[256];
	con['(']=0;
	con['[']=1;
	con['{']=2;
	con[')']=3;
	con[']']=4;
	con['}']=5;
	
	int i,j,n;
	
	n=s.length();
	
	for (i=0;i<n;i++) {
		if (con[s[i]]>=0&&con[s[i]]<=2)
			sta.push(con[s[i]]);
		else
			if (!sta.empty()&&sta.top()==con[s[i]]-3)
				sta.pop();
			else
				return false;
	}
	
	if (!sta.empty())
		return false;
	else
		return true;
}
};
