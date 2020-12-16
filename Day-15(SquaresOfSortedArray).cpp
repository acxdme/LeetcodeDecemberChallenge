/*
Time complexity : O(NlogN)
Space complexity : O(N)
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        if(n== 0) return res; 
        for(int i=0;i<n;i++)
        {
            res[i]= nums[i]*nums[i];
        }  
        sort(res.begin(),res.end());
        
        return res;
        
    }
};
