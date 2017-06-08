/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

Subscribe to see which companies asked this question.
*/

#include <iostream>
#include<vector>
using namespace std;
/****************************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return answer={i,j};
                }
            }
        }
    }
};
/****************************/

vector<int> twoSum(vector<int>& nums, int target);
int main() {
    vector<int> Given_nums ={2, 7, 11, 15};
    int target = 9;
    for(auto i:twoSum(Given_nums,target)){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}