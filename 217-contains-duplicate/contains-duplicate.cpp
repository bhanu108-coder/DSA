class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ht;

        for (int i = 0; i < nums.size(); i++) 
        {
            if (ht.find(nums[i]) != ht.end()) 
            {
                return true;
            }
            ht.insert(nums[i]);
        }
        return false;
    }
};