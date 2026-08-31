class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) 
    {
       int n = t.size();
       stack<int>st;
       vector<int>res(n,0);

       for(int i = 0 ; i<t.size() ; i++)
       {
         while(!st.empty() and t[i] > t[st.top()])
         {
            int idx = st.top();
            st.pop();
            res[idx] = i-idx;
         }
         st.push(i);
       }

       return res;
        
    }
};