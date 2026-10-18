class Solution {
   public:
    typedef pair<int, int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<p, vector<p>, greater<p>> pq;
        unordered_map<int, int> mp;
        vector<int> ans;
        for (auto it : nums) mp[it]++;
        for (auto it : mp) {
            pq.push({it.second, it.first});
            if (pq.size() > k) pq.pop();
        }
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};