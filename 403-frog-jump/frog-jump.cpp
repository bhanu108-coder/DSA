class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        if(stones[1]!=1)
            return false;
        unordered_map<int,unordered_set<int>> dp;
        for(int i = 0; i < n; i++) 
        {
            dp[stones[i]] = {};
        }
        dp[0].insert(0);
        for(int i=0;i<n;i++) 
        {
            int pos=stones[i];
            for(int k:dp[pos]) 
            {
                for(int jump=k-1;jump<=k+1;jump++) 
                {

                    if(jump>0 && dp.find(pos+jump)!=dp.end()) 
                    {
                        dp[pos+jump].insert(jump);
                    }
                }
            }
        }
        return !dp[stones[n-1]].empty();
    }
};
