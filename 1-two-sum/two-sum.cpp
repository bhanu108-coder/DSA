class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size()-1;i++)
        {
            int first=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                int second=nums[j];
                if(target==first+second)
                return {i,j};
            }
        }
        return {};
        
    }
};