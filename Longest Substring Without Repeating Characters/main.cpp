class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,n,ans=0;
        bool appear[256];
        queue<char> que;
        char temp;
        
        for (i=0;i<256;i++)
            appear[i]=false;
        
        n=s.length();
        for (i=0;i<n;i++)
        {
            if (!appear[s[i]])
            {
                appear[s[i]]=true;
                que.push(s[i]);
            }
            else
            {
                while(1)
                {
                    temp=que.front();
                    que.pop();
                    appear[temp]=false;
                    if (temp==s[i])
                        break;
                }
                appear[s[i]]=true;
                que.push(s[i]);
            }
            ans=que.size()>ans?que.size():ans;
        }
        return ans;
    }
};
