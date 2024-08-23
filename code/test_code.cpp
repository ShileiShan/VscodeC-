#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];
            if (hash.find(numberToFind) != hash.end()) {
                result.push_back(hash[numberToFind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
    }
};

int target = 9;
int nums[] = {2, 8, 7, 15};

int main() {
    vector<int> nums_v(nums, nums + sizeof(nums) / sizeof(int));
    Solution solution;
    vector<int> result = solution.twoSum(nums_v, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}