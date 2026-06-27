class Solution {
public:
    int findMin(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {

            // Array already sorted
            if (nums[left] < nums[right])
                return nums[left];

            int mid = left + (right - left) / 2;

            // Left half is sorted
            if (nums[mid] >= nums[left]) {
                left = mid + 1;
            }
            // Minimum is in left half
            else {
                right = mid;
            }
        }

        return nums[left];
    }
};