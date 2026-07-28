class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int left=0; 
    int count=0;
    double currentsum=0;
    for(int right=0;right<arr.size();right++){
        currentsum+=arr[right];
        if(right>=k-1){
            if((currentsum/k)>=threshold)count++;
            currentsum-=arr[left];
            left++;
        }
    }
    return count;
    }
};