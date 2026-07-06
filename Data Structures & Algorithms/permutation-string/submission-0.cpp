class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {

        
        int n = s1.length();
        int m = s2.length();

        if(m<n)
        return false;

        vector<int>freqs1(26,0);
        vector<int>freqs2(26,0);

        for(int i = 0 ; i<n ; i++)
        {
            freqs1[s1[i]-'a']++;
            freqs2[s2[i]-'a']++;
        }

        int matches = 0;
        for(int i = 0 ; i<26 ; i++)
        {
            if(freqs1[i] == freqs2[i])
            matches++;
        }

        int left = 0;
        for(int right = n ; right<m ; right++)
        {
            if(matches == 26)
            return true;

            int index = s2[right]-'a';
            freqs2[index]++;

            if(freqs2[index]==freqs1[index])
            matches++;

            else if(freqs1[index]+1 == freqs2[index])
            matches--;
            

            index = s2[left]-'a';
            freqs2[index]--;

            if(freqs1[index] == freqs2[index])
            matches++;

            else if(freqs1[index]-1 == freqs2[index])
            matches--;

            left++;
        }

        return matches == 26;
    }
};
