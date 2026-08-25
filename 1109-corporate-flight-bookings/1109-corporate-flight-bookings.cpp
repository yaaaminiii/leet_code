class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
       
         vector<int> flights(n);
        vector<int> diffarray(n + 1, 0);

        for (auto booking : bookings) {
            int l = booking[0];
            int r = booking[1];
            int val = booking[2];

            diffarray[l - 1] += val;
            diffarray[r] -= val;
        }

        int sum = 0;
        vector<int> ps(n);

        for (int i = 0; i < n; i++) {
            sum += diffarray[i];
            ps[i] = sum;
        }

        for (int i = 0; i < n; i++) {
            flights[i] += ps[i];
        }

        return flights;
    }
};