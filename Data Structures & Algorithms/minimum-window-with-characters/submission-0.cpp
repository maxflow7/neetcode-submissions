class Solution {
public:

bool containsall(unordered_map<char,int>&tempfreq, unordered_map<char, int>&tfreq)
{
    for(auto & entry:tfreq)
    {
        if(tempfreq[entry.first]<entry.second)
        return false;
    }

    return true;
}
    string minWindow(string s, string t) 
    {
        unordered_map<char, int> tfreq;
        
        for(char c : t)
        tfreq[c]++;

        int minlen = INT_MAX;
        string result = "";

        for(int i = 0 ; i<s.length() ; i++)
        {
            unordered_map<char, int>tempfreq;

            for(int j = i; j<s.length() ; j++)
            {
                tempfreq[s[j]]++;

                if(containsall(tempfreq, tfreq))
                {
                    if(j-i+1 < minlen)
                    {
                        minlen = j-i+1;
                        result = s.substr(i,j-i+1);
                    }

                    break;
                }

            }
        }

        return result;
        
    }
};
