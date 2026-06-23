class Solution {
public:


bool alphanum(char c)
{
  return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
      
}
    bool isPalindrome(string s) 
    {

      int l = 0;
      int r = s.length()-1;

      while(l<r)
      {
        //skip for all the character if do not belong to alphanum.
        while(l<r and !alphanum(s[l]))
        l++;

       //same for the backward direction
        while(r>l and !alphanum(s[r]))
        r--;

        //check if the character is equal or not
        if(tolower(s[l])!=tolower(s[r]))
        return false;

        l++;
        r--;
      }

      return true;
        
    }
};
