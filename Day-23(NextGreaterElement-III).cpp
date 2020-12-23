/*
Time complexity : O(n^2)
Space complexity : O(N)
My approach : Next greater approach for string.
*/

class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if( n < 12 or n== 1999999999 or n== 2147483647 ) return -1;
        
        bool flag = false;
        
        int size = s.size();
        for(int i=size-1;i>0;i--)   // 1 4 3 2
        {                           // 0 1 2 3
            if(s[i] > s[i-1])  
            {
                // swap(s[i],s[i-1]);
                for(int k=size-1; k>i-1;k--)
                {  
                    if(s[k] > s[i-1])
                    {
                        swap(s[i-1],s[k]);
                        break;
                    }
                }
               sort(s.begin()+i,s.end());
                flag = true;
                // cout<<"answer"<<endl;
                break;
            }
            
        }
        
        if( flag == false ) return  -1;
        long long int res = 0;
        for(int i= 0;i< size ;i++)
            res =  res*10 + (s[i]-'0'); 
        
        int answer = res;
        return answer;
     
// 21
// 132
// 321
// 1432
        
    }
};
