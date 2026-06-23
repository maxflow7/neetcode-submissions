class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> mp; // To count frequencies
        vector<int> ans;

        // Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> arr;
        // Push frequencies and elements into a vector of pairs
        for (auto x : mp) {
            arr.push_back({x.second, x.first}); // {frequency, element}
        }

        // Sort in descending order based on the frequency
        sort(arr.begin(), arr.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.first > b.first; // Sort by frequency (first) in descending order
        });

        // Collect the top k frequent elements
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};

