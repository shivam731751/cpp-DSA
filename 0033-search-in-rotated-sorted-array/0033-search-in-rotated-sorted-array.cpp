class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low  = 0; 
        int heigh = nums.size()-1;

        while(low <= heigh){
            int mid = (low + heigh) / 2;

            if(nums[mid] == target) return mid;

            if(nums[low] <=  nums[mid]) {
                if(nums[low] <= target && target <= nums[mid]){
                    heigh =  mid -1;
                }
                else {
                    low  = mid +1;
                }
            }
            else {
                if(nums[mid] <= target && target<= nums[heigh]){
                    low = mid +1;
                }
                else {
                    heigh = mid -1;
                }
            }
        }
        return -1;
    }
};