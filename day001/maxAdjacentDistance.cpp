class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        nums.push_back(nums.at(0));
        short max = 0;
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            unsigned short a = std::abs(nums.at(i) - nums.at(i + 1));
            if (max < a) max = a;
        }
        return max;
    }
};
