/*
Time complexity  : O(N)
Space complexity : O(N)
My approach : 
*/

class Solution {
public:
    int numDecodings(string s) {
        int n =s.size();
        if( n== 1 and s[0]=='0') return 0;
        else if(n==1 and s[0] > '0' )  return 1;
        
        int dp[n+1];
        memset(dp,0,sizeof(dp));     
        dp[0]=1;
        dp[1] = s[0] == '0' ? 0 : 1;  
        for(int i=2;i<=n;i++)
        {
            if(s[i-1] > '0' and s[i]<= '9') dp[i] = dp[i-1];
            else dp[i] = 0;
            if(s.substr(i-2,2) >= "10" and s.substr(i-2,2)<= "26")
                dp[i] = dp[i-2]+dp[i];
        }
        
        
        return dp[n];
    }
};
