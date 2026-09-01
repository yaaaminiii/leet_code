class Solution {
public:

    bool canShip(vector<int>& weights, int capacity, int days) {
        int currentWeightSum = 0;
        int requiredDays = 1;

        for (int weight : weights) {

            if (currentWeightSum + weight <= capacity) {
                currentWeightSum += weight;
            }
            else {
                requiredDays++;
                currentWeightSum = weight;
            }
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (canShip(weights, mid, days)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};