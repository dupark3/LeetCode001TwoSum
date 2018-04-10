#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;


        return indices;
    }
};

int main()
{
    vector<int> input = {2, 7, 11, 15};
    int target = 9;

    Solution s;
    vector<int> resulting_indices = s.twoSum(input, target);

    cout << resulting_indices[0] << ", " << resulting_indices[1] << endl;

    return 0;
}
