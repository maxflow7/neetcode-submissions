class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n = matrix.size();
        if(left == 0)
        return false;

        int m = matrix[0].size();

        int left = 0;
        int right = n*m -1;

        while(left<=right)
        {
            int pvtindex = (left+right)/2;
            int pvtelement = matrix[pvtindex/m][pvtindex%m];

            if(target == pvtelement)
            return true;

            else if (pvtelement<target)
            left = pvtindex+1;

            else
            right = pvtindex-1;


        }

        return false;
        
    }
};
