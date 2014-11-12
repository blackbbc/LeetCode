class Solution {
public:
bool isPalindrome(string s) {
	int i,j,n;
	string cache;
	n=s.length();
	
	for (i=0;i<n;i++) {
		if (s[i]>='a'&&s[i]<='z')
			cache.push_back(s[i]);
		else
			if (s[i]>='A'&&s[i]<='Z')
				cache.push_back(s[i]+32);
			else
				if (s[i]>='0'&&s[i]<='9')
					cache.push_back(s[i]);
		}
	
	n=cache.length();
	for (i=0;i<(n+1)/2;i++)
		if (cache[i]!=cache[n-i-1])
			return false;
	return true;
}
};
