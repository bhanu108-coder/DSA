class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1),end(nums1));
        unordered_set<int> st;
        for(int &num : nums2)
        {
            if (binary_search(begin(nums1),end(nums1),num))
            st.insert(num);
        }
        vector<int> result (begin(st),end(st));
        return result;
        
    }
};