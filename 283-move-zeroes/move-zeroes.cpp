class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,i;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};