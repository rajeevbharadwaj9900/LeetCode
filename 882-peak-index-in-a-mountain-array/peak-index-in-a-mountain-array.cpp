class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] < nums[mid + 1]) {
                start = mid + 1;
            } else if (nums[mid] > nums[mid + 1]) {
                end = mid;
            }
        }

        return start;
    }
};
