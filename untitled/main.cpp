#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> vv;
        int a = nums.size();
        int i;
        int j;
        for (i = 0; i < a; i++) {
            for (j = i + 1; j < a; j++) {
                if ((nums[i] + nums[j]) == target) {
                    vv.push_back(nums[i]);
                    vv.push_back(nums[j]);
                    return vv;
                }

            }

        }
        return vv;
    }
};


int main() {
    Solution solution;
    vector<int> vv1;
    vector<int> vv2;
    vector<int>::iterator ite;
    vv1.push_back(1);
    vv1.push_back(2);
    vv1.push_back(3);
    vv1.push_back(4);
    int taget = 4;
    vv2 = solution.twoSum(vv1, taget);
    return 0;
}