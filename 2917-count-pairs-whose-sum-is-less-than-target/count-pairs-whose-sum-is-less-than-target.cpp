class Solution {
public:
  int countPairs(vector<int>& nums , int target){
      sort(nums.begin() , nums.end());
      int result = 0;
      int leftIndex = 0;
      int rightIndex = nums.size() - 1;
      while(leftIndex < rightIndex){
          if(nums[leftIndex] + nums[rightIndex] < target){
              result += rightIndex - leftIndex;
              leftIndex++;
          }
          else{
              rightIndex--;
          }
      }
      return result;
  }
};
