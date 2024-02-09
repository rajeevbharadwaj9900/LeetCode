class Solution {
public:
    int mySqrt(int num) {
        if (num == 0)
            return num;
        int start = 1, end = num;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid == num / mid)
                return mid;
            else if (mid > num / mid) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return end;
    }
};
