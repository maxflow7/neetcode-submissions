class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
    {
        int n = position.size();
        vector<pair<int, int>>cars;

        for(int i = 0 ; i< n ; i++)
        {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<pair<int,int>>());

        stack<double>st;

        for(auto c : cars)
        {
            auto tp = c.first;
            auto ts = c.second;

            double timetaken = (double)(target-tp)/ts;

            if(st.empty() or timetaken > st.top())
            st.push(timetaken);
        }

        return st.size();


        
    }
};
