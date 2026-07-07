class Solution {
public:
    string minWindow(string s, string t) 
    {
        unordered_map<char, int>tfreq;

        for(auto c : t)
        tfreq[c]++;

        int req = tfreq.size();
        int left = 0;
        int right = 0;

        int current = 0;

        unordered_map<char, int>tempfreq;

        int minlen = INT_MAX;
        int minleft = 0;


        while(right<s.length())
        {
            tempfreq[s[right]]++;

            if(tfreq.count(s[right]) and tfreq[s[right]] == tempfreq[s[right]])
            current++;

            while(left<=right and current == req)
            {
                if(right-left+1 < minlen)
                {
                    minlen = right-left+1;
                    minleft = left;
                }

                char leftchar = s[left];
                tempfreq[leftchar]--;

                if(tfreq.count(leftchar) and tempfreq[leftchar]<tfreq[leftchar])
                current--;

                left++;
            }
            right++;
        }

        return minlen == INT_MAX?"" :s.substr(minleft, minlen);
        
    }
};
