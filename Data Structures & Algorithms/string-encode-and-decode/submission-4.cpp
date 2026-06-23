class Solution {
public:

    string encode(vector<string>& strs) 
    {

        string encoded_string="";

        for(int i = 0 ; i<strs.size() ; i++)
        {
            encoded_string += to_string(strs[i].length());
            encoded_string += '#';
            encoded_string += strs[i];
        }

        return encoded_string;

    }

    vector<string> decode(string s) 
    {

        vector<string>ans;
        int n = s.length();
        int i = 0;

        while(i<n)
        {
           int j = i;
           while(s[j] != '#')
           j++;

           int length = stoi(s.substr(i, j-i));
           i = j+1;
           j = i+length;

           ans.push_back(s.substr(i,length));
           i = j;

        }

        return ans;

    }
};
