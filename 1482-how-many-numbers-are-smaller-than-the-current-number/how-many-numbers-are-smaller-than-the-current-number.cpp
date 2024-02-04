class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i, j, count = 0;
        int n = nums.size();
        vector<int> pusht(n);

        for (i = 0; i < n; i++) {
            count = 0;
            for (j = 0; j < n; j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
            pusht[i] = count;
        }

        return pusht;
    }
};