#include <iostream>
#include <stdexcept> // domain_error
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> solution;
        size_t size_nums = nums.size();

        for (int i = 0; i != size_nums; ++i){
            for (int j = i + 1; j != size_nums; ++j){
                if (nums[i] + nums[j] == target){
                    return solution = {i, j};
                }
            }
        }
        throw domain_error("No two sum solution");
    }
};

int main()
{
    vector<int> input = {2, 7, 11, 15, -4, 23};
    int target = 100;

    Solution s;
    vector<int> resulting_indices = s.twoSum(input, target);
    try {
        cout << resulting_indices[0] << ", " << resulting_indices[1] << endl;
    } catch(domain_error e){
        cout << e.what() << endl;
    }

    return 0;
}
