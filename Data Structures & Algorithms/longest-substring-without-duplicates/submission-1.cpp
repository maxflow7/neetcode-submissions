class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
       int n = s.length();
       unordered_set<int>st;

       int l = 0;
       int res = 0;

       for(int r = 0; r<n ; r++)
       {

         while(st.find(s[r])!=st.end())
         {
         st.erase(s[l]);
         l++;
         }

         st.insert(s[r]);
         res = max(res, r-l+1);

       }

       return res;

        
    }
};
