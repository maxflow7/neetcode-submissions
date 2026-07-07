class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {

        vector<int>result;

        for(int i = 0 ; i<=nums.size()-k ; i++)
        {
            int maxval = nums[i];
            for(int j = i ; j<i+k ; j++)
            {
                maxval = max(maxval, nums[j]);
            }

            result.push_back(maxval);

        }
        
        return result;
    }
};
