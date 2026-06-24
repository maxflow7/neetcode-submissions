class Solution {
public:
    int maxArea(vector<int>& heights) 
    {

        int n = heights.size();

        int left = 0;
        int right = n-1;

        int area = 0;

        while(left<right)
        {
            int width = (right-left);

            area = max(area, min(heights[left], heights[right])*width);

            if(heights[left] < heights[right])
            left++;

            else
            right--;

        }

        return area;
        
    }
};
