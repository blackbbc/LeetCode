/**

反转数字
判断是否溢出
乘法转除法：
ans>2147483647/10 


*/

class Solution {
public:
    int reverse(int x) {
    bool flag=false;
	int ans=0;
	
	if (x<0)
	{
		flag=true;
		x=-x;
	}
	
	while (x>0)
	{
	    if (ans>214748364)
			return 0;
		ans=ans*10+x%10;
		x=x/10;
	}
	
	if (flag)
	    ans=-ans;
	
	return ans;
    }
};
