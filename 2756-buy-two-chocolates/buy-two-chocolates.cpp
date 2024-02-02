#include <vector>
#include <climits> // For INT_MAX

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int s1 = INT_MAX, s2 = INT_MAX;
        for(int price : prices) {
            if(price < s1) {
                s2 = s1; 
                s1 = price;
            } else if(price < s2) {
                s2 = price; 
            }
        }
        if(s1 + s2 <= money) return money - (s1 + s2); 
        return money; 
    }
};
