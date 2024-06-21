class Solution {
public:
    bool isPalindrome(std::string inputString) {
        std::string filteredString;
        for(const auto& character : inputString) {
            if(character >= 'A' && character <= 'Z') {
                filteredString.push_back(character - 'A' + 'a');
            } else if(character >= 'a' && character <= 'z') {
                filteredString.push_back(character);
            } else if(character >= '0' && character <= '9') {
                filteredString.push_back(character);
            }
        }

        int stringLength = filteredString.size();
        for(int forwardIndex = 0; forwardIndex < stringLength / 2; ++forwardIndex) {
            if(filteredString[forwardIndex] != filteredString[stringLength - forwardIndex - 1]) {
                return false;
            }
        }
        return true;
    }
};
