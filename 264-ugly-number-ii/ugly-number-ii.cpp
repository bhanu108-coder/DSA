class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        unordered_set<long long> s;

        pq.push(1);
        s.insert(1);
        long long ans = 1;
        for(int i = 0; i < n; i++) 
        {
            ans = pq.top();
            pq.pop();
            if(s.insert(ans*2).second)
                pq.push(ans*2);
            if(s.insert(ans*3).second)
                pq.push(ans*3);
            if(s.insert(ans*5).second)
                pq.push(ans*5);
        }
        return ans;
    }
};
