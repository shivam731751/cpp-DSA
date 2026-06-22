class Solution {
public:
    int  firstoccur(vector<int>& nums, int target) {
        int low = 0;
        int heigh = nums.size() - 1;
        int first = -1;
        while (low <= heigh) {
            int mid = (low + heigh) / 2;

            if (nums[mid] == target) {
                first = mid;
                heigh = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                heigh = mid - 1;
            }

        }
            return first;
    }

    int lastoccur(vector<int>& nums, int target) {
        int low = 0;
        int heigh = nums.size() - 1;
        int last = -1;
        while (low <= heigh) {
            int mid = (low + heigh) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                heigh = mid - 1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstoccur( nums, target);
        if (first == -1)
            return {-1, -1};
        int last = lastoccur(nums, target);
        return {first, last};
    }
};