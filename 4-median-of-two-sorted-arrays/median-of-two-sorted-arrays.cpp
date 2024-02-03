class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int size1 = arr1.size();
        int size2 = arr2.size();
        int index1 = 0, index2 = 0, median1 = 0, median2 = 0;

        for (int count = 0; count <= (size1 + size2) / 2; count++) {
            median2 = median1;
            if (index1 != size1 && index2 != size2) {
                if (arr1[index1] > arr2[index2]) {
                    median1 = arr2[index2++];
                } else {
                    median1 = arr1[index1++];
                }
            } else if (index1 < size1) {
                median1 = arr1[index1++];
            } else {
                median1 = arr2[index2++];
            }
        }

        if ((size1 + size2) % 2 == 1) {
            return static_cast<double>(median1);
        } else {
            double result = static_cast<double>(median1) + static_cast<double>(median2);
            return result / 2.0;
        }
    }
};
