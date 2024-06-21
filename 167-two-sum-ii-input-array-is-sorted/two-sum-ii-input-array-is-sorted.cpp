class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int i = 0; int j = size-1;
        while(i<=j)
        {
            if(numbers[i] + numbers [j]>target)
            {
                j--;
            }
            else if (numbers[i] + numbers [j]<target)
            {
                i++;
            }
            else
            {
                return{i+1,j+1};
            }
        }
        return {};
    }
};