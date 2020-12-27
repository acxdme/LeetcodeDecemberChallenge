/*
Time complexity : O(N*M)
Space complexity : O(N*M)
My approach : Asked In acko
*/
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> res;
        if(n == 0 ) return res;
        int m = matrix[0].size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            for(int j =0 ;j<m;j++)
            {
                mp[i+j].push_back(matrix[i][j]);
            }
        }
        int count=0;
        for(auto it : mp)
        {
            if(count%2 == 0)
                reverse(it.second.begin(),it.second.end());
            count++;
            for(auto it1 = it.second.begin(); it1 != it.second.end();it1++)
            {
                res.push_back(*it1);
            }
            //     cout<<*it1<<" ";
            // cout<<endl;
        }
        cout<<endl;
        
        
        return res;

        
    }
};
