#include <iostream>
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

        return solution; // no solution
    }
};

int main()
{
    vector<int> input = {2, 7, 11, 15, -4, 23};
    int target = 19;

    Solution s;
    vector<int> resulting_indices = s.twoSum(input, target);
    if (resulting_indices.size() != 0)
        cout << resulting_indices[0] << ", " << resulting_indices[1] << endl;
    else
        cout << "No two sum solution" << endl;
    return 0;
}
