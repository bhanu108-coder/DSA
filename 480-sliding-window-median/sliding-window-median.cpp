class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums,int k) {
        multiset<int>l,h;
        vector<double>ans;
        auto balance=[&]() {
            while(l.size() > h.size()+1) {
                h.insert(*l.rbegin());
                auto it = prev(l.end());
                l.erase(it);
            }
            while(l.size() < h.size()) {
                l.insert(*h.begin());
                h.erase(h.begin());
            }
        };

        for(int i=0;i<nums.size();i++) {
            if(l.empty() || nums[i] <= *l.rbegin())
                l.insert(nums[i]);
            else
                h.insert(nums[i]);
            balance();

            if(i>=k) {
                int x = nums[i-k];
                if(l.find(x) != l.end())
                    l.erase(l.find(x));
                else
                    h.erase(h.find(x));
                balance();
            }

            if(i>=k-1) {
                if(k%2 == 1)
                    ans.push_back(*l.rbegin());
                else
                    ans.push_back(((double)*l.rbegin() + *h.begin())/2.0);
            }
        }
        return ans;
    }
};
