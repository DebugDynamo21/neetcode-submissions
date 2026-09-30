class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> res;

        for(int x: nums){
            freq[x]++;
        }

        for(auto x: freq){
            if(x.second >= k){
                if(freq.find(x.first) != freq.end()){
                    res.push_back(x.first);
                }
            }
        }

        return res;
    }
};
