/*Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

 题目大意：
给一组数组，要求得出所有和为0的数字组合，要求数字组合不能重复出现，并且按照升序排列
*/

/*
Submission Result: Runtime Error
Runtime Error Message:reference binding to null pointer of type 'value_type'
Last executed input:[]

Run Code Status: Finished
 */

#include <iostream>
#include<vector>
using namespace std;

/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        vector<int> answer1;
        for (int i = 0; i < 6; i++) {
            if (i > 0 && nums[i] == nums[i - 1]);
            else {
                for (int j = i + 1; j < 6; j++) {
                    if (j > i + 1 && nums[j] == nums[j - 1]);
                    else {
                        for (int k = j + 1; k < 6; k++) {
                            if (k > j + 1 && nums[k] == nums[k - 1]);
                            else {
                                if (nums[i] + nums[j] + nums[k] == 0) {
                                    answer1 = {nums[i], nums[j], nums[k]};
                                    answer.push_back(answer1);
                                }
                            }
                        }
                    }
                }
            }
        }
        return answer;
    }
};*/
vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());//排序（头，尾，排序方式）
    vector<vector<int>> answer;
    vector<int> answer1;
    for (int i = 0; i < 6; i++) {
        if (i > 1 && nums[i] == nums[i - 1]);
        else {
            for (int j = i + 1; j < 6; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]);
                else {
                    for (int k = j + 1; k < 6; k++) {
                        if (k > j + 1 && nums[k] == nums[k - 1]);
                        else {
                            if (nums[i] + nums[j] + nums[k] == 0) {
                                answer1 = {nums[i], nums[j], nums[k]};
                                answer.push_back(answer1);
                            }
                        }
                    }
                }
            }
        }
    }
    return answer;
}
int main() {
    vector<int> S = {-1, 0, 1, 2, -1, -4};//-4,-1,-1,0,1,2
    for (auto i:threeSum(S)) {
        for (auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}